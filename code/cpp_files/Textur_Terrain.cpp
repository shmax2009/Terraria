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

void WT::connect()
{
	world_texture[0].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/sky.png");
	world_texture[1].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/ground.png");
	world_texture[2].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Stone.png");
	world_texture[3].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Wood.png");
	world_texture[4].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Sand.png");
	world_texture[5].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Cobwet.png");
	world_texture[6].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Ebonsand.png");
	world_texture[7].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Crimsand.png");
	world_texture[8].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Pearlsand.png");
	world_texture[9].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Clay.png");
	world_texture[10].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Ash.png");
	world_texture[11].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Ebonstone.png");
	world_texture[12].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Glass.png");
	world_texture[13].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Spike.png");
	world_texture[14].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Copper.png");
	world_texture[15].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Iron.png");
	world_texture[16].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Silver.png");
	world_texture[17].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Gold.png");
	world_texture[18].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Demonite.png");
	world_texture[19].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Obsidian.png");
	world_texture[20].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Meteorite.png");
	world_texture[21].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Hellstone.png");
	world_texture[22].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Cobalt.png");
	world_texture[23].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Mythril.png");
	world_texture[24].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Adamantite.png");
	world_texture[25].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/black.png");
	world_texture[26].loadFromFile("/home/max/learn_c/Teraria/Resurce/Blocks/Ground_with_Grass.png");
}
