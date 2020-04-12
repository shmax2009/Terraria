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

using namespace std;
using namespace sf;

int min(int x);

int freeInventor(Inventory *inventor, int f);

int what_nymber_of_inventor(Event event, int on);

void How_hero_change_position(Hero &h, Event event, int &rotation, int &numb,Block **arr);

#endif
