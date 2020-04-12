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
	world_texture[0].loadFromFile("/home/max/learn_c/Teraria/Resurce/sky.png");
	world_texture[1].loadFromFile("/home/max/learn_c/Teraria/Resurce/ground.png");
	world_texture[2].loadFromFile("/home/max/learn_c/Teraria/Resurce/Stone.png");
	world_texture[3].loadFromFile("/home/max/learn_c/Teraria/Resurce/Wood.png");
	world_texture[4].loadFromFile("/home/max/learn_c/Teraria/Resurce/Sand.png");
	world_texture[5].loadFromFile("/home/max/learn_c/Teraria/Resurce/Cobwet.png");
	world_texture[6].loadFromFile("/home/max/learn_c/Teraria/Resurce/Ebonsand.png");
	world_texture[7].loadFromFile("/home/max/learn_c/Teraria/Resurce/Crimsand.png");
	world_texture[8].loadFromFile("/home/max/learn_c/Teraria/Resurce/Pearlsand.png");
	world_texture[9].loadFromFile("/home/max/learn_c/Teraria/Resurce/Clay.png");
	world_texture[10].loadFromFile("/home/max/learn_c/Teraria/Resurce/Ash.png");
	world_texture[11].loadFromFile("/home/max/learn_c/Teraria/Resurce/Ebonstone.png");
	world_texture[12].loadFromFile("/home/max/learn_c/Teraria/Resurce/Glass.png");
	world_texture[13].loadFromFile("/home/max/learn_c/Teraria/Resurce/Spike.png");
	world_texture[14].loadFromFile("/home/max/learn_c/Teraria/Resurce/Copper.png");
	world_texture[15].loadFromFile("/home/max/learn_c/Teraria/Resurce/Iron.png");
	world_texture[16].loadFromFile("/home/max/learn_c/Teraria/Resurce/Silver.png");
	world_texture[17].loadFromFile("/home/max/learn_c/Teraria/Resurce/Gold.png");
	world_texture[18].loadFromFile("/home/max/learn_c/Teraria/Resurce/Demonite.png");
	world_texture[19].loadFromFile("/home/max/learn_c/Teraria/Resurce/Obsidian.png");
	world_texture[20].loadFromFile("/home/max/learn_c/Teraria/Resurce/Meteorite.png");
	world_texture[21].loadFromFile("/home/max/learn_c/Teraria/Resurce/Hellstone.png");
	world_texture[22].loadFromFile("/home/max/learn_c/Teraria/Resurce/Cobalt.png");
	world_texture[23].loadFromFile("/home/max/learn_c/Teraria/Resurce/Mythril.png");
	world_texture[24].loadFromFile("/home/max/learn_c/Teraria/Resurce/Adamantite.png");
	world_texture[25].loadFromFile("/home/max/learn_c/Teraria/Resurce/black.png");
	world_texture[26].loadFromFile("/home/max/learn_c/Teraria/Resurce/Ground_with_Grass.png");
}
