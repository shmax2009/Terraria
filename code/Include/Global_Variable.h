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
		static const int x;
		static const int y;
		static const float size;
		static bool timeforjump;
};

#endif

