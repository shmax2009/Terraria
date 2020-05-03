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

 int GV::x = 1990;
 int GV::y = 496;
 float GV::size = 3.0;
bool GV::timeforjump=false;
bool GV::isitendofjump=true;
float GV::vect=0;
int GV::day=0;
