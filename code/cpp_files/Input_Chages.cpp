#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
// #include <vector>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <create_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <BIOF.h>
#include <Class_Hero.h>
#include <vector>
// 0.5 1
// gimp 48 48
//https://terraria-ru.gamepedia.com/%D0%91%D0%BB%D0%BE%D0%BA%D0%B8

using namespace std;
using namespace sf;

void input_bounds(RenderWindow &window, Event *event, ofstream &fout, ifstream &fin,vector<vector<Block*>> arr, Hero &h, Inventory *inventor, int &n, int &rotation, int &numb)
{
    // FIXME: Comment

    while (window.pollEvent(event[0]))
    {
        if (event[0].type == Event::Closed)
        {
            fout.open("/home/max/learn_c/Teraria/Maps/map.txt", ofstream::out);
            cinmap(arr, fout);
            fout.close();

            fout.open("/home/max/learn_c/Teraria/Maps/inventor.bin", ofstream::out);
            saveInventory(inventor, fout);
            fout.close();

            fout.open("/home/max/learn_c/Teraria/Maps/position.bin", ofstream::out);
            fout.write((char *)&h, sizeof(Hero));
            window.close();
        }

        if (event[0].type == Event::KeyPressed)
        {
            if (event[0].key.code == Keyboard::Escape)
            {
                inventor[n].col = 0;
            }

            How_hero_change_position(h, event,rotation,numb,arr);
            n = what_nymber_of_inventor(event, n);
        }
    }
}
