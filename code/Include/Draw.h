#ifndef DRAW_H
#define DRAW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>

#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Global_Variable.h>
#include <crete_map.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>

using namespace std;
using namespace sf;

void drawWorld(RenderWindow &window, Block **arr, Texture *world_texture, float rt, float gt);

void DrawInventor(RenderWindow &window, Texture *world, Inventory *inventor);

#endif
