#ifndef CLASS_HERO_H
#define CLASS_HERO_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>

#include <Class_Block.h>
#include <Class_Inventory.h>

using namespace std;
using namespace sf;
//t=y;r=x;
class Hero
{
	public:
		float r;
		float t;
		int ro=r;
		int to=t;
	void fythics_position(int gravity ,Block **arr);
	
};

#endif
