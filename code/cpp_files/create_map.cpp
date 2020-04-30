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
#include <night_block.h>
#include <grass_block.h>
#include <fabrica.h>
using namespace std;
using namespace sf;

int n0(int x)
{
	if (x == 0)
		x = 1;

	return x;
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
void randomxy(vector<vector<Block*>> arr, int max, Biom *biom)
{
	for (int o = 0; o < 100; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			arr[g][o] = (fabrica::create(0));
		}
	}

	for (int o = 100; o < 110; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			int tmptyp = whatsthetype(g, o, biom, 3);
			arr[g][o] = (fabrica::create(tmptyp));
		}
	}

	for (int o = 110; o < 140; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			if (rand() % 10 == 0)
				arr[g][o] = (fabrica::create(0));
			else
				arr[g][o] = (fabrica::create(random() % 4 + 1));
		}
	}
	// cout<<"1"<<endl;
	for (int i = 140; i < GV::y; i++)
	{
		for (int j = 0; j < GV::x; j++)
		{
			arr[j][i] = (fabrica::create(rand() % (int)n0(abs(trunc(2 + i / 10.0 - 2)))));
			int tmptyp = whatsthetype(j, i, biom, 3);
			if (rand() % 10 != 0)
				arr[j][i] = (fabrica::create(tmptyp));
		}
		// cout<<"1"<<endl;
	}
}
