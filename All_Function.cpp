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
    if (event.key.code == Keyboard::Num1 || event.key.code == Keyboard::Numpad1)
        n = 0;
    if (event.key.code == Keyboard::Num2 || event.key.code == Keyboard::Numpad2)
        n = 1;
    if (event.key.code == Keyboard::Num3 || event.key.code == Keyboard::Numpad3)
        n = 2;
    if (event.key.code == Keyboard::Num4 || event.key.code == Keyboard::Numpad4)
        n = 3;
    if (event.key.code == Keyboard::Num5 || event.key.code == Keyboard::Numpad5)
        n = 4;
    if (event.key.code == Keyboard::Num6 || event.key.code == Keyboard::Numpad6)
        n = 5;
    if (event.key.code == Keyboard::Num7 || event.key.code == Keyboard::Numpad7)
        n = 6;
    if (event.key.code == Keyboard::Num8 || event.key.code == Keyboard::Numpad8)
        n = 7;
    return n;
}

void How_hero_change_position(Hero &h, Event event,int &rotation,int &numb)
{
    if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::D))
    {
        h.r -= 2;
        rotation=1;
        numb++;
    }
    if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::A))
    {
        h.r += 2;
        rotation=-1;
        numb++;
    }
    if ((event.key.code == Keyboard::Up) || (event.key.code == Keyboard::W))
    {
        h.t += 2;
        GV::timeforjump=true;
    }
    if ((event.key.code == Keyboard::Down) || (event.key.code == Keyboard::S))
    {
        h.t -= 2;
    }
}
