#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>
#include <stdio.h>

#include <Cursor_doing_in_game.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <Global_Variable.h>
#include <Class_Hero.h>
#include <Fabrica.h>

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
#include <night_block.h>
#include <grass_block.h>

using namespace std;
using namespace sf;

void all_thing_thats_happend_with_cursor(RenderWindow &window, Event *event, Inventory *inventor, Block **arr, Sprite Frame, Sprite Cursor, int n, Hero &h)
{
    int xmc;
    int ymc;

    Vector2i pixelPos = Mouse::getPosition(window);
    Vector2f pos = window.mapPixelToCoords(pixelPos);

    Cursor.setPosition(pos.x, pos.y);

    xmc = (int)(pos.x - trunc(h.r)) / (24 / GV::size);
    ymc = (int)(pos.y - trunc(h.t)) / (48 / GV::size);

    if (true)
    {

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if ((arr[xmc][ymc].getType() != 0) && (freeInventor(inventor, arr[xmc][ymc].getType()) < 8))
            {
                if (arr[xmc][ymc].getType() == 26)
                    arr[xmc][ymc]=*(Fabrica::create(1));

                inventor[freeInventor(inventor, arr[xmc][ymc].getType())].type = arr[xmc][ymc].getType();
                inventor[freeInventor(inventor, arr[xmc][ymc].getType())].col++;

                arr[xmc][ymc] = *(Fabrica::create(0));
            }
        }

        if (Mouse::isButtonPressed(Mouse::Right))
        {
            if ((arr[xmc][ymc + 1].getType()) || (arr[xmc][ymc - 1].getType()) || (arr[xmc + 1][ymc].getType()) || (arr[xmc - 1][ymc].getType()) || (arr[xmc + 1][ymc - 1].getType()) || (arr[xmc + 1][ymc + 1].getType()) || (arr[xmc - 1][ymc + 1].getType()) || (arr[xmc - 1][ymc - 1].getType()))
            {
                if (arr[xmc][ymc].getType() == 0)
                {
                    arr[xmc][ymc] = *(Fabrica::create(inventor[n].type));

                    inventor[n].col--;
                }
            }
        }
    }

    if (inventor[n].col <= 0)
    {
        inventor[n].col = 0;
        inventor[n].type = 0;
    }

    Frame.setPosition(n * (24 / GV::size), 0);

    window.draw(Frame);
    window.draw(Cursor);
}
