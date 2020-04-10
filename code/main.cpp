#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Input_chages.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <crete_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <BIOF.h>
#include <Class_Hero.h>

// 0.5 1
// gimp 48 48
//https://terraria-ru.gamepedia.com/%D0%91%D0%BB%D0%BE%D0%BA%D0%B8

using namespace std;
using namespace sf;

default_random_engine generator;
WT wt;
	
const float FPS = 120.0f;
const int col_material = 25;

struct sizeh
{
	float h;
	float w;
};

int main()
{
	sizeh siz;
	siz.h=0.000001;
	siz.w=0.3;
	
	sf::Color color(255, 0, 0);
	
	srand(static_cast<unsigned int>(time(0)));
	normal_distribution<double> distribution(19, 2.0);
	
	RenderWindow window(VideoMode(200, 200), "Teraria");
	
	window.setMouseCursorVisible(false);
	window.setFramerateLimit(FPS);

	wt.connect();
	
	ofstream fout;
	ifstream fin;
	
	Hero h;
	Inventory inventor[8];

	Block **arr = new Block *[GV::x];
	
	for (int i = 0; i < GV::x; i++)
		arr[i] = new Block[GV::y];

	Texture Cursor_texture;
	Texture Frame_texture;

	Sprite Cursor;
	Sprite Frame;

	int xmc = 0;
	int ymc = 0;
	int n = 0;

	Texture hairtextureanim[16];
	
	for (int i = 1; i <= 16; i++)
	{
		hairtextureanim[i - 1].loadFromFile("Resurce/HeroTexture/Hair/hair" + to_string(i) + ".png");
	}

	Texture headtextureanim[20];
	
	for (int i = 1; i <= 20; i++)
	{
		headtextureanim[i - 1].loadFromFile("Resurce/HeroTexture/Head/head" + to_string(i) + ".png");
	}

	Sprite head;
	head.setTexture(headtextureanim[0]);
	head.setColor(color);
	head.setScale(0.3, 0.3);
	head.setPosition(101, 104);

	Texture boudytextureanim[14];

	for (int i = 1; i <= 14; i++)
	{
		boudytextureanim[i - 1].loadFromFile("Resurce/HeroTexture/boudy/boudy" + to_string(i) + ".png");
	}

	Texture legstextureanim[15];
	
	int p=0;
	
	for (int i = 1; i <= 15; i++)
	{   
		if (i == 2) 
			p = 1;

		legstextureanim[i - 1].loadFromFile("Resurce/HeroTexture/legs/legs" + to_string(i+p) + ".png");
	}

	Sprite boudy;
	boudy.setTexture(boudytextureanim[0]);
	boudy.setColor(Color::Yellow);
	boudy.setScale(siz.w, siz.h);
	boudy.setPosition(101.5, 107);

	Sprite hair;
	hair.setTexture(hairtextureanim[0]);
	hair.setColor(Color::Blue);
	hair.setScale(siz.w, siz.h);
	hair.setPosition(100, 100);
	open_or_create_all(fin, fout, arr, col_material, h, inventor);

	Sprite legs;
	legs.setTexture(legstextureanim[0]);
	legs.setColor(Color::Blue);
	legs.setScale(siz.w,siz.h);
	legs.setPosition(99, 113);

	open_or_create_all(fin, fout, arr, col_material, h, inventor);
	
	Cursor_texture.loadFromFile("Resurce/Cursor.png");
	Frame_texture.loadFromFile("Resurce/Frame.png");
	
	Cursor.setTexture(Cursor_texture);
	Frame.setTexture(Frame_texture);
	
	Cursor.setScale(1, 1);
	Frame.setScale((0.5 / GV::size), (1 / GV::size));
	Cursor.setRotation(10);
	
	int rotation = 1;
	
	Event event;
	int numb = 0;
	
	while (window.isOpen())
	{
		hair.setScale(siz.w * rotation, siz.w);
		hair.setTexture(hairtextureanim[numb % 16]);
		
		head.setScale(siz.w * rotation, siz.w);
		head.setTexture(headtextureanim[numb % 20]);
		
		boudy.setScale(siz.w * rotation, siz.w);
		boudy.setTexture(boudytextureanim[(int)(trunc(numb / 3)) % 14]);
		
		legs.setScale(siz.w * rotation, siz.w);
		legs.setTexture(legstextureanim[(int)(trunc(numb / 3)) % 15]);
	
		if (rotation < 0)
		{
			head.setPosition(99,104);
			boudy.setPosition(101.5,107);
			legs.setPosition(101, 113);
		}
		else
		{ 
			boudy.setPosition(98.5, 107);
			head.setPosition(101, 104);
			legs.setPosition(99, 113);
		}

		input_bounds(window, event, fout, fin, arr, h, inventor, n, rotation, numb);
		window.clear();

		drawWorld(window, arr, wt.world_texture, h.r, h.t);

		all_thing_thats_happend_with_cursor(window, event, inventor, arr, Frame, Cursor, n, h.r, h.t);
		
		DrawInventor(window, wt.world_texture, inventor);
		
		window.draw(hair);
		window.draw(head);
		window.draw(boudy);
		window.draw(legs);
		window.display();

	}
	
	for (int i = 0; i < GV::x; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;
}
