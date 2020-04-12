#ifndef TEXTUR_TERRAIN_H
#define TEXTUR_TERRAIN_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>

#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Global_Variable.h>

using namespace std;
using namespace sf;

class WT
{
	public:
		Texture world_texture[27]; // public ?
		
		void connect();
};

#endif
