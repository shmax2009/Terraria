#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <vector>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Global_Variable.h>
#include <create_map.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <Animation_of_hero.h>
#include <Draw.h>

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
#include <fabrica.h>
using namespace std;
using namespace sf;
// Please, redo everything
void drawWorld(RenderWindow &window, vector<vector<Block *>> &arr, Texture *world_texture, Hero h)
{
    int r = round(h.getPosx());
    int g = round(h.getPosy());
    for (int i = 1; i < GV::x; i++)
    {
        for (int j = 1; j < GV::y; j++)
        {

            float tmpx = i * (24 / GV::size);
            float tmpy = j * (48 / GV::size);
            int type = 0;
            if (((tmpx > -120 + r) && (tmpx < 220 + r)) && ((tmpy > -120 + g) && (tmpy < 220 + g)) && (i > 0 && i < GV::x) && (j > 0 && j < GV::y))
            {

                Sprite tmp;
                if (arr[i][j] != NULL)
                {

                    type = arr[i][j]->getType();
                    // if (type == 0)
                    // {
                    //     if (GV::day == 0)
                    //         tmp.setTexture(world_texture[type]);
                    //     else
                    //     {
                    //         tmp.setTexture(world_texture[25]);
                    //     }
                    // }
                    // else
                    // {
                    tmp.setTexture(world_texture[type]);

                    tmp.setScale((0.5 / GV::size + 0.01), (1 / GV::size + 0.01));
                    tmp.setPosition(tmpx, tmpy);

                    window.draw(tmp);
                }
            }
        }
    }
}

void DrawInventor(RenderWindow &window, Texture *world, Inventory *inventor, Hero h)
{
    int r = round(h.getPosx());
    int g = round(h.getPosy());
    for (int i = 0; i < 8; i++)
    {
        if (inventor[i].type != 0)
        {
            int tmpx = i * (24 / GV::size) + r - 100;
            int tmpy = g - 100;
            Sprite tmp;

            tmp.setTexture(world[inventor[i].type]);

            tmp.setScale((0.5 / GV::size), (1 / GV::size));
            tmp.setPosition(tmpx, tmpy);
            window.draw(tmp);
        }
    }
}
