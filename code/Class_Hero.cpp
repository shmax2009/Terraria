#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include<Animation_of_hero.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <crete_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>

#include <Class_Hero.h>
// 0.5 1
// gimp 48 48
//https://terraria-ru.gamepedia.com/%D0%91%D0%BB%D0%BE%D0%BA%D0%B8

using namespace std;
using namespace sf;

void Hero::fythics_position(int gravity, Block **arr)
{ 
    int xmc;
    int ymc;
    xmc = (int)(102-trunc(r)) / (24 / GV::size);
    ymc = (int)(115 - trunc(t)) / (48 / GV::size);
    t -= (float)gravity;
    if (arr[xmc][ymc].getType() != 0)
        t += (float)gravity;
}
