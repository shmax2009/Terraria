#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <Animation_of_hero.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <create_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <vector>
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
// #include <night_block.h>
//#include <grass_block.h>
#include <Class_Hero.h>
// 0.5 1
// gimp 48 48
//https://terraria-ru.gamepedia.com/%D0%91%D0%BB%D0%BE%D0%BA%D0%B8

using namespace std;
using namespace sf;

void Hero::fythics_position(float &gravity, vector<vector<Block *>> arr)
{
    int xmc;
    int ymc;
    xmc = (int)((xhero)) / (24 / GV::size);
    ymc = (int)((yhero)) / (48 / GV::size) +1;

    // cout<<xmc<<" "<<ymc<<endl;

    cout<<xmc<<" "<<ymc<<endl;
    
    if (arr[xmc][ymc]->getType() == 0)
    {
        yhero += (float)gravity;
        gravity+=0.01;
        // cout << "true" << endl;
    }else
    gravity=1;
}
void Hero::move(float x, float y)
{
    xhero += x;
    yhero += y;
}
float Hero::getPosx()
{
    return xhero;
}
float Hero::getPosy()
{
    return yhero;
}