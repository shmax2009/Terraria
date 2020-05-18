#ifndef SIOFS_H
#define SIOFS_H

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
#include <create_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <fabrica.h>
#include <vector>

using namespace std;
using namespace sf;

bool emp(std::ifstream &pFile);

void cinmap(vector<vector<Block*> > &arr, ofstream &fout);
void coutmap(vector<vector<Block*> > &arr, ifstream &fin);

void saveInventory(Inventory *Inventor, ofstream &fout);
void openInventory(Inventory *Inventor, ifstream &fin);

#endif
