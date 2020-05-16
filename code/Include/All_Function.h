#ifndef ALL_FUNCTION_H 
#define ALL_FUNCTION_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>

#include <Class_Hero.h>
#include <fstream>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Animation_of_hero.h>
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
//#include <grass_block.h>
#include <vector>
using namespace std;
using namespace sf;

int min(int x);

int freeInventor(Inventory *inventor, int f);

int what_nymber_of_inventor(Event *event, int on);

void How_hero_change_position(RenderWindow &window,Hero &h, View &view, Event *event, int &rotation, int &numb, vector<vector<Block *>> arr);

#endif
