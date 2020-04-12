#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>

#include <crete_map.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>

using namespace std;
using namespace sf;

int n0(int x)
{
	if (x == 0)
		x = 1;

	return x;
}

void randomxy(Block **arr, int max)
{
	for (int o = 0; o < 100; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			arr[g][o].setType(0);
		}
	}

	for (int o = 100; o < 110; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			arr[g][o].setType(1);
		}
	}
	
	for (int o = 110; o < 140; o++)
	{
		for (int g = 0; g < GV::x; g++)
		{
			if (rand() % 10 == 0)
				arr[g][o].setType(0);
			else
				arr[g][o].setType(random() % 4 + 1);
		}
	}
	
	for (int i = 140; i < GV::y; i++)
	{
		for (int j = 0; j < GV::x; j++)
		{
			arr[j][i].setType(rand() % (int)n0(abs(trunc(2 + i / 10.0 - 2))));

			if (rand() % 10 != 0)
				arr[j][i].setType(1);
		}
	}
}
