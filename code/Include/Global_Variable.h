#ifndef GLOBAL_VARIABLE_H
#define GLOBAL_VARIABLE_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>

#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>

using namespace std;
using namespace sf;

class GV
{
public:
	static int x;
	static int y;
	static float size;
	static bool timeforjump;
	static bool isitendofjump;
	static float vect;
	static int day;
	static string s;
	static int col_biom;
};

#endif
