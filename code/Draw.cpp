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
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>

#include <Draw.h>

using namespace std;
using namespace sf;

// Please, redo everything
void drawWorld(RenderWindow &window, Block **arr, Texture *world_texture, float rt, float gt)
{
    int r=(round(rt));
    int g=(round(gt));
    for (int i = abs(r) * (GV::size / 24); i < abs(abs(r) + 200) * (GV::size / 24); i++)
    {
        for (int j = abs(g) * GV::size / 48; j < abs(abs(g) + 200) * GV::size / 48; j++)
        {
            if ((arr[i][j].getType() == 1 || arr[i][j].getType() == 26))
			{
                if(arr[i][j-1].getType() == 0) 
					arr[i][j].setType(26); 
				else
                	arr[i][j].setType(1);
            }

            float tmpx = i * (24 / GV::size) + (r * 1);
            float tmpy = j * (48 / GV::size) + (g * 1);

            if (((tmpx > -20) && (tmpx < 220)) && ((tmpy > -20) && (tmpy < 220)))
            {
                Sprite tmp;
                if(arr[i][j].getType()==0){
                if(GV::day==0)
                tmp.setTexture(world_texture[arr[i][j].getType()]);
                else
                {
                tmp.setTexture(world_texture[25]);  
                }
                }
                else
                {
                    tmp.setTexture(world_texture[arr[i][j].getType()]);
                }
                
                
                tmp.setScale((0.5 / GV::size + 0.01), (1 / GV::size + 0.01));
                tmp.setPosition(tmpx, tmpy);

                window.draw(tmp);
            }
        }
    }
}

void DrawInventor(RenderWindow &window, Texture *world, Inventory *inventor)
{
    for (int i = 0; i < 8; i++)
    {
        if (inventor[i].type != 0)
        {
            int tmpx = i * (24 / GV::size);
            int tmpy = 0;
            Sprite tmp;

            tmp.setTexture(world[inventor[i].type]);

            tmp.setScale((0.5 / GV::size), (1 / GV::size));
            tmp.setPosition(tmpx, tmpy);
            window.draw(tmp);
        }
    }
}
