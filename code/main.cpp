#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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
#include <create_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <BIOF.h>
#include <Class_Hero.h>
#include <Animation_of_hero.h>
#include <Class_Biom.h>

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
	Music music[4];
	music[0].openFromFile("/home/max/learn_c/Teraria/Resurce/Musics/Day.wav");
	music[0].setLoop(true);
	music[0].play();
	music[1].openFromFile("/home/max/learn_c/Teraria/Resurce/Musics/Night.wav");
	music[1].setLoop(true);
	music[2].openFromFile("/home/max/learn_c/Teraria/Resurce/Musics/Desert.wav");
	music[2].setLoop(true);
	music[3].openFromFile("/home/max/learn_c/Teraria/Resurce/Musics/Hell.wav");
	music[3].setLoop(true);
	float gravity = 1.0;
	sizeh siz;
	siz.h = 0.3;
	siz.w = 0.3;

	sf::Color color(255, 0, 0);
	//   Biom biom[10];
	srand(static_cast<unsigned int>(time(0)));
	normal_distribution<double> distribution(19, 2.0);

	RenderWindow window(VideoMode(200, 200), "Teraria");

	window.setMouseCursorVisible(false);
	window.setFramerateLimit(FPS);
	Biom biom[3];
	biom[0].generate(0, 0, GV::x / 2 - 4000, GV::y, Desert);
	biom[1].generate(GV::x / 2 + 1 - 4000, 0, GV::x / 2 - 3900, GV::y, Jungle);
	biom[2].generate(GV::x / 2 + 1 - 3900, 0, GV::x, GV::y, Hell);
	wt.connect();
	Texture green_slime_texture;
	green_slime_texture.loadFromFile("/home/max/learn_c/Teraria/Resurce/Mobs/Green_Slime.png");
	Sprite slime;
	slime.setTexture(green_slime_texture);
	slime.setScale(0.3, 0.3);
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
	anim_her.takeit(siz, color);

	open_or_create_all(fin, fout, arr, col_material, h, inventor, biom);

	Cursor_texture.loadFromFile("/home/max/learn_c/Teraria/Resurce/Cursor.png");
	Frame_texture.loadFromFile("/home/max/learn_c/Teraria/Resurce/Frame.png");

	Cursor.setTexture(Cursor_texture);
	Frame.setTexture(Frame_texture);

	Cursor.setScale(1, 1);
	Frame.setScale((0.5 / GV::size), (1 / GV::size));
	Cursor.setRotation(10);

	int rotation = 1;

	Event event[1];
	int numb = 0;
	int procent = 0;
	int iterator = 40;
	int it = 0;
	while (window.isOpen())
	{

		if (GV::timeforjump && procent != 1)
		{
			iterator = 0;
			procent = 1;
			GV::isitendofjump = false;
		}

		if (iterator == 30)
		{
			GV::timeforjump = false;
			procent = 0;
		}
		if (iterator == 65)
		{
			GV::isitendofjump = true;
			procent = 0;
		}
		anim_her.setRot(rotation, numb, siz);
		input_bounds(window, event, fout, fin, arr, h, inventor, n, rotation, numb);
		window.clear();

		drawWorld(window, arr, wt.world_texture, h.r, h.t);

		all_thing_thats_happend_with_cursor(window, event, inventor, arr, Frame, Cursor, n, h);
		DrawInventor(window, wt.world_texture, inventor);
		anim_her.drawhero(window);
		window.display();
		if (!GV::timeforjump)
			h.fythics_position(gravity, arr);
		else
		{
			h.t += 1;
		}

		iterator++;
		it++;

		if (it % 1000 == 999)
		{
			music[GV::day].stop();
			GV::day = (GV::day + 1) % 2;
			music[GV::day].play();
		}
		int xmc;
		int ymc;
		xmc = (int)(102 - trunc(h.r)) / (24 / GV::size);
		ymc = (int)(115 - trunc(h.t)) / (48 / GV::size);
		if (whatsthetype(xmc, ymc, biom, 3) == 4)
		{
			music[1].stop();
			music[0].stop();
			if (music[2].getStatus() == 0)
			{
				music[2].play();
			}
		}
		else
		{
			if (whatsthetype(xmc, ymc, biom, 3) == 21)
			{
				music[1].stop();
				music[0].stop();
				music[2].stop();
				if (music[3].getStatus() == 0)
				{
					music[3].play();
				}
			}
			else
			{
				music[2].stop();
				music[3].stop();
				if (music[GV::day].getStatus() == 0)
				{
					music[GV::day].play();
				}
			}
		}
	}

	for (int i = 0; i < GV::x; i++)
		delete[] arr[i];

	delete[] arr;

	return 0;
}
