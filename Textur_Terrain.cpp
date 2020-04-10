#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Global_Variable.h>
#include <Textur_Terrain.h>

using namespace std;
using namespace sf;
   void WT::connect(){
    world_texture[0].loadFromFile("Resurce/sky.png");
    world_texture[1].loadFromFile("Resurce/ground.png");
    world_texture[2].loadFromFile("Resurce/Stone.png");
    world_texture[3].loadFromFile("Resurce/Wood.png");
    world_texture[4].loadFromFile("Resurce/Sand.png");
    world_texture[5].loadFromFile("Resurce/Cobwet.png");
    world_texture[6].loadFromFile("Resurce/Ebonsand.png");
    world_texture[7].loadFromFile("Resurce/Crimsand.png");
    world_texture[8].loadFromFile("Resurce/Pearlsand.png");
    world_texture[9].loadFromFile("Resurce/Clay.png");
    world_texture[10].loadFromFile("Resurce/Ash.png");
    world_texture[11].loadFromFile("Resurce/Ebonstone.png");
    world_texture[12].loadFromFile("Resurce/Glass.png");
    world_texture[13].loadFromFile("Resurce/Spike.png");
    world_texture[14].loadFromFile("Resurce/Copper.png");
    world_texture[15].loadFromFile("Resurce/Iron.png");
    world_texture[16].loadFromFile("Resurce/Silver.png");
    world_texture[17].loadFromFile("Resurce/Gold.png");
    world_texture[18].loadFromFile("Resurce/Demonite.png");
    world_texture[19].loadFromFile("Resurce/Obsidian.png");
    world_texture[20].loadFromFile("Resurce/Meteorite.png");
    world_texture[21].loadFromFile("Resurce/Hellstone.png");
    world_texture[22].loadFromFile("Resurce/Cobalt.png");
    world_texture[23].loadFromFile("Resurce/Mythril.png");
    world_texture[24].loadFromFile("Resurce/Adamantite.png");
    world_texture[25].loadFromFile("Resurce/black.png");
    world_texture[26].loadFromFile("Resurce/Ground_with_Grass.png");
   }
