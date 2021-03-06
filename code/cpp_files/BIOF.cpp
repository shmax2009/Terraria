#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <vector>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <create_map.h>
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

void open_or_create_all(ifstream &fin, ofstream &fout, vector<vector<Block*>> &arr, int col_material, Hero &h, Inventory *inventor,Biom *biom)
{
	fin.open(GV::s+ "Maps/map.bin");

	if (emp(fin))
	{
		randomxy(arr, col_material,biom);
		// cout<<"9"<<endl;
		fout.open(GV::s+ "Maps/map.bin", ofstream::app);
		cinmap(arr, fout);
		fout.close();
	}
	else
	{
		coutmap(arr, fin);
	}

	fin.close();

	fin.open(GV::s+ "Maps/position.bin");

	if(emp(fin))
	{
		h.yhero = 199* (24 / GV::size);
		h.xhero = 100* (48 / GV::size);
	}
	else
	{
		fin.read((char*)&h, sizeof(Hero));    
	}
	
	fin.close();

	fin.open(GV::s+ "Maps/inventor.bin");

	if(emp(fin))
	{
		for (int i = 0; i < 8; i++)
		{
			fout.open(GV::s+ "Maps/inventor.bin");
			inventor[i].type = 0;
			saveInventory(inventor,fout);
			
			fout.close();
		}
	}
	else
	{   
		//cout<<"1"<<endl;
		openInventory( inventor,fin);
	}

	fin.close();
}
