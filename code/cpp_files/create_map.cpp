#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <create_map.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>
#include <Class_Biom.h>

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
//#include <grass_block.h>
#include <fabrica.h>

using namespace std;
using namespace sf;

int n0(int x)
{
	return x == 0 ? 1 : x;
}
int whatsthetype(int x, int y, Biom *biom, int size)
{
	int h;

	for (int i = 0; i < size; i++)
	{
		if (((biom[i].x1mc <= x) and (biom[i].x2mc >= x)) and ((biom[i].y1mc <= y) and (biom[i].y2mc >= y)))
		{
			h = i;
			break;
		}
	}
	return biom[h].Bioms_block;
}
void randomxy(vector<vector<Block *>> &arr, int max, Biom *biom)
{
	for (int o = 0; o < GV::x; o++)
	{
		for (int g = 0; g < 100; g++)
		{
			delete arr[o][g];

			arr[o][g] = (fabrica::create(0));
			// cout<<0;
		}
		// cout<<endl;
	}

	for (int l = 0; l < GV::x; l++)
	{
		for (int k = 100; k < 110; k++)
		{
			
			int tmptyp = whatsthetype(l, k, biom, GV::col_biom);
			delete arr[l][k];
			arr[l][k] = (fabrica::create(tmptyp));
			// cout<<tmptyp;
		}
		// cout<<endl;
	}

	for (int o = 0; o < GV::x; o++)
	{
		for (int g = 110; g < 140; g++)
		{
			delete arr[o][g];
			if (rand() % 10 == 0)
				arr[o][g] = (fabrica::create(0));
			else
				arr[o][g] = (fabrica::create(random() % 4 + 1));
		}
	}
	// cout<<"1"<<endl;
	// cout<<"h"<<endl;
	for (int i = 140; i < GV::y; i++)
	{
		for (int j = 0; j < GV::x; j++)
		{
			delete arr[j][i];
			int tmptyp = whatsthetype(i, j, biom, GV::col_biom);
			if (rand() % 10 != 0)
			{
				arr[j][i] = (fabrica::create(tmptyp));
			}
			else
			{
				arr[j][i] = (fabrica::create((rand() % (int)n0(abs(trunc(2 + i / 10.0 - 2)))) % 26));
			}
		}

		// cout<<"1"<<endl;
	}
	// cout << "10" << endl;
}
