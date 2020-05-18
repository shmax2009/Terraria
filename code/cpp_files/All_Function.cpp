#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <Class_Hero.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>
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
// #include <night_block.h>
//#include <grass_block.h>
using namespace std;
using namespace sf;

int min(int x)
{
    if ((GV::x < 19) && (GV::x > 0.25))
    {
        return GV::x;
    }
    else
    {
        if (GV::x < 0.25)
        {
            return 1;
        }
    }
}

int freeInventor(Inventory *inventor, int f)
{
    int h = 99;

    for (int n = 0; n < 8; n++)
    {
        if ((inventor[n].type == f))
        {
            h = n;
            break;
        }
    }
    if (h = 99)
    {
        for (int n = 0; n < 8; n++)
        {
            if ((inventor[n].type == 0))
            {
                h = n;
                break;
            }
        }
    }

    return h;
}

int what_nymber_of_inventor(Event *event, int on)
{
    int n = on;

    if (event[0].key.code >= Keyboard::Num1 && event[0].key.code <= Keyboard::Num8)
    {
        n = event[0].key.code - Keyboard::Num1;
    }
    else if (event[0].key.code >= Keyboard::Numpad1 && event[0].key.code <= Keyboard::Numpad8)
    {
        n = event[0].key.code - Keyboard::Numpad1;
    }

    return n;
}

void How_hero_change_position(RenderWindow &window, Hero &h, View &view, Event *event, int &rotation, int &numb, vector<vector<Block *>> &arr)
{
    // h.ro = h.r;
    // h.to = h.t;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;

    if ((event[i1].key.code == Keyboard::Right) || (event[i1].key.code == Keyboard::D))
    {
        int xmc;
        int ymc;
        h.move(2, 0);
        // view.move(2, 0);
        // window.setView(view);
        xmc = (int)(h.getPosx()) / (24 / GV::size);
        ymc = (int)(h.getPosy()) / (48 / GV::size);
        // cout<<xmc<<ymc<<endl;
        if (arr[xmc][ymc]->getType() != 0)
        {
            h.move(-2, 0);
            // view.move(-2, 0);
            // window.setView(view);
        }

        rotation = 1;
        numb++;
        GV::vect = 1;
    }

    if ((event[i2].key.code == Keyboard::Left) || (event[i2].key.code == Keyboard::A))
    {
        int xmc;
        int ymc;
        h.move(-2, 0);
        // view.move(-2, 0);
        // window.setView(view);
        xmc = (int)(h.getPosx()) / (24 / GV::size);
        ymc = (int)(h.getPosy()) / (48 / GV::size);

        if (arr[xmc][ymc]->getType() != 0)
        {
            h.move(2, 0);
        }
        rotation = -1;
        numb++;
        GV::vect = -1;
    }

    if ((event[i3].key.code == Keyboard::Space) && GV::isitendofjump == true)
    {
        int xmc;
        int ymc;
        xmc = (int)(h.getPosx()) / (24 / GV::size);
        ymc = (int)(h.getPosy()) / (48 / GV::size);

        if (arr[xmc][ymc]->getType() == 0)
            GV::timeforjump = true;
    }
}
