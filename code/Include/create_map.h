#ifndef CRETE_MAP_H
#define CRETE_MAP_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>

#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>
#include <Class_Biom.h>

using namespace std;
using namespace sf;

int n0(int x);
int whatsthetype(int x, int y, Biom *biom, int size);
void randomxy(Block **arr, int max,Biom *biom);

#endif
