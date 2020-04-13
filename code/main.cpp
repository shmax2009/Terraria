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
#include <Animation_of_hero.h>

// 0.5 1
// gimp 48 48
//https://terraria-ru.gamepedia.com/%D0%91%D0%BB%D0%BE%D0%BA%D0%B8

using namespace std;
using namespace sf;

default_random_engine generator;
WT wt;

const float FPS = 120.0f;
const int col_material = 25;




int main()
{   
	float gravity=1.0;
	sizeh siz;
	siz.h = 0.3;
	siz.w = 0.3;

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
	Hero_anim anim_her;
	anim_her.takeit(siz,color);

	open_or_create_all(fin, fout, arr, col_material, h, inventor);
	open_or_create_all(fin, fout, arr, col_material, h, inventor);

	Cursor_texture.loadFromFile("/home/max/learn_c/Teraria/Resurce/Cursor.png");
	Frame_texture.loadFromFile("/home/max/learn_c/Teraria/Resurce/Frame.png");

	Cursor.setTexture(Cursor_texture);
	Frame.setTexture(Frame_texture);

	Cursor.setScale(1, 1);
	Frame.setScale((0.5 / GV::size), (1 / GV::size));
	Cursor.setRotation(10);

	int rotation = 1;

	Event event;
	// Event event1;
	int numb = 0;
    int procent=0;	
	int iterator=40;
	while (window.isOpen())
	{
       if (GV::timeforjump  && procent !=1 )
	   {
		 iterator=0;
		 procent=1;
		 GV::isitendofjump=false;
	   }
	   
	   if(iterator==30)
	   {
		   GV::timeforjump=false;
			procent=0;
	   }
	    if(iterator==60)
	   {
		   GV::isitendofjump=true;
			procent=0;
	   }
		anim_her.setRot(rotation, numb, siz);
		input_bounds(window, event, fout, fin, arr, h, inventor, n, rotation, numb);
		window.clear();

		drawWorld(window, arr, wt.world_texture, h.r, h.t);

		all_thing_thats_happend_with_cursor(window, event, inventor, arr, Frame, Cursor, n,h);

		DrawInventor(window, wt.world_texture, inventor);
		anim_her.drawhero(window);
		window.display();
		if(!GV::timeforjump)
		h.fythics_position(gravity,arr);
		else
		{
			h.t+=1;
		}
		
		iterator++;
	}

	for (int i = 0; i < GV::x; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;
}
