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
#include <Music.h>
#include <game.h>
#include <vector>
#include <sky_block.h>
#include <ground_block.h>
#include <stone_block.h>
#include <wood_block.h>
#include <sand_block.h>
#include <ebonsand_block.h>
#include <crimsand_block.h>
#include <pearlsand_block.h>
#include <clay_block.h>
#include <ash_block.h>
#include <ebonstone_block.h>
#include <glass_block.h>
#include <spike_block.h>
#include <copper_block.h>
#include <iron_block.h>
#include <silver_block.h>
#include <gold_block.h>
#include <demonite_block.h>
#include <obsidian_block.h>
#include <metiorite_block.h>
#include <hellstone_block.h>
#include <cobalt_block.h>
#include <Mythril_block.h>
#include <adamantite_block.h>
// #include <night_block.h>

#include <fabrica.h>
void create_pole(vector<vector<Block *>> &arr)
{
	for (int i = 0; i < GV::x; i++)
	{
		vector<Block *> b;
		for (int j = 0; j < GV::y; j++)
		{
			Block *g = fabrica::create(0);
			b.push_back(g);
			// if(j==) cout<<"hi"<<endl;
		}
		arr.push_back(b);
		// if(i == 7000) cout<<"dgf"<<endl;
	}
}
void Game::play()
{
	// Music_of_game music;
	// music.conect();
	GV::s = "/home/max/learn_c/Terraria/";
	float gravity = 1.0;
	sizeh siz;
	siz.h = 0.3;
	siz.w = 0.3;

	sf::Color color(255, 0, 0);
	//   Biom biom[10];
	srand(static_cast<unsigned int>(time(0)));
	normal_distribution<double> distribution(19, 2.0);

	RenderWindow window(VideoMode(200, 200), "Terraria");
	window.setMouseCursorVisible(false);
	View view;

	window.setFramerateLimit(FPS);
	Biom biom[3];
	GV::col_biom = 3;
	biom[0].generate(0, 0, GV::x / 2 - 4000, GV::y, Desert);
	biom[1].generate(GV::x / 2 + 1 - 4000, 0, GV::x / 2 - 3900, GV::y, Jungle);
	biom[2].generate(GV::x / 2 + 1 - 3900, 0, GV::x, GV::y, Hell);
	wt.connect();

	ofstream fout;
	ifstream fin;

	Hero h;
	Inventory inventor[8];
	vector<vector<Block *>> arr;
	create_pole(arr);
	// cout << "1" << endl;
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
	// cout<<"8"<<endl;
	Cursor_texture.loadFromFile(GV::s + "Resurce/Cursor.png");
	Frame_texture.loadFromFile(GV::s + "Resurce/Frame.png");

	Cursor.setTexture(Cursor_texture);
	Frame.setTexture(Frame_texture);

	Cursor.setScale(1, 1);
	Frame.setScale((0.5 / GV::size), (1 / GV::size));
	Cursor.setRotation(10);

	int rotation = 1;

	int numb = 0;
	int procent = 0;
	int iterator = 40;
	int it = 0;
	// cout << "2" << endl;
	view.reset(sf::FloatRect(h.getPosx() - 100, h.getPosy() - 100, 200, 200));
	window.setView(view);
	//----------------------------------------------------------------------------------------------

	while (window.isOpen())
	{
		Event event[1];

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
		anim_her.setPosition(h.xhero, h.yhero);
		view.reset(sf::FloatRect(h.getPosx() - 100, h.getPosy() - 100, 200, 200));
		window.setView(view);
		anim_her.setRot(rotation, numb, siz, h);
		input_bounds(window, event, fout, fin, arr, h, inventor, n, rotation, numb, view, anim_her);
		window.clear();

		drawWorld(window, arr, wt.world_texture, h);

		all_thing_thats_happend_with_cursor(window, event, inventor, arr, Frame, Cursor, n, h);
		DrawInventor(window, wt.world_texture, inventor, h);
		anim_her.drawhero(window);

		window.display();
		if (!GV::timeforjump)
			h.fythics_position(gravity, arr);
		else
		{

			h.move(0, -1);
		}

		iterator++;
		it++;
		// music.Music_play(it, anim_her, biom);
	}

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			delete arr[i][j];
			// cout<<i<<" "<<j<<endl;
		}
	}
	// delete window;
	// arr.clear();
}