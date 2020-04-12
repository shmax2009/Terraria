#ifndef CURSUR_DOING_IN_GMAE_H
#define CURSUR_DOING_IN_GMAE_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>

#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>
#include <Class_Hero.h>
using namespace std;
using namespace sf;

// you should definitely split this function into smaller once
void all_thing_thats_happend_with_cursor(RenderWindow &window, Event event, Inventory *inventor, Block **arr, Sprite Frame, Sprite Cursor, int n,Hero &h);

#endif
