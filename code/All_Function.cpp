#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>

#include <Class_Hero.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>

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
        if ((inventor[n].type == 0) || (inventor[n].type == f))
        {
            h = n;
            break;
        }
    }

    return h;
}

int what_nymber_of_inventor(Event event, int on)
{
    int n = on;

    if (event.key.code >= Keyboard::Num1 && event.key.code <= Keyboard::Num8)
    {
        n = event.key.code - Keyboard::Num1;
    }
    else if (event.key.code >= Keyboard::Numpad1 && event.key.code <= Keyboard::Numpad8)
    {
        n = event.key.code - Keyboard::Numpad1;
    }

    return n;
}

void How_hero_change_position(Hero &h, Event event, int &rotation, int &numb,Block **arr)
{

    if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::D))
    {
        int xmc;
        int ymc;
        xmc = (int)(105 - trunc(h.r)) / (24 / GV::size);
        ymc = (int)(105 - trunc(h.t)) / (48 / GV::size);

        if (arr[xmc][ymc].getType() == 0)
            h.r -= 2.0;
        rotation = 1;
        numb++;
    }

    if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::A))
    {
        int xmc;
        int ymc;
        xmc = (int)(100 - trunc(h.r)) / (24 / GV::size);
        ymc = (int)(105 - trunc(h.t)) / (48 / GV::size);

        if (arr[xmc][ymc].getType() == 0)
            h.r += 2.0;
        rotation = -1;
        numb++;
    }

    if ((event.key.code == Keyboard::Space) && GV::isitendofjump==true)
    {   
        int xmc;
        int ymc;
        xmc = (int)(100 - trunc(h.r)) / (24 / GV::size);
        ymc = (int)(95 - trunc(h.t)) / (48 / GV::size);
        
        if (arr[xmc][ymc].getType() == 0)
        GV::timeforjump = true;
        }
    
}
