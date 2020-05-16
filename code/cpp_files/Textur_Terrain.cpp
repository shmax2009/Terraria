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
	world_texture[0].loadFromFile(GV::s+ "Resurce/Blocks/sky.png");
	world_texture[1].loadFromFile(GV::s+ "Resurce/Blocks/ground.png");
	world_texture[2].loadFromFile(GV::s+ "Resurce/Blocks/Stone.png");
	world_texture[3].loadFromFile(GV::s+ "Resurce/Blocks/Wood.png");
	world_texture[4].loadFromFile(GV::s+ "Resurce/Blocks/Sand.png");
	world_texture[5].loadFromFile(GV::s+ "Resurce/Blocks/Cobwet.png");
	world_texture[6].loadFromFile(GV::s+ "Resurce/Blocks/Ebonsand.png");
	world_texture[7].loadFromFile(GV::s+ "Resurce/Blocks/Crimsand.png");
	world_texture[8].loadFromFile(GV::s+ "Resurce/Blocks/Pearlsand.png");
	world_texture[9].loadFromFile(GV::s+ "Resurce/Blocks/Clay.png");
	world_texture[10].loadFromFile(GV::s+ "Resurce/Blocks/Ash.png");
	world_texture[11].loadFromFile(GV::s+ "Resurce/Blocks/Ebonstone.png");
	world_texture[12].loadFromFile(GV::s+ "Resurce/Blocks/Glass.png");
	world_texture[13].loadFromFile(GV::s+ "Resurce/Blocks/Spike.png");
	world_texture[14].loadFromFile(GV::s+ "Resurce/Blocks/Copper.png");
	world_texture[15].loadFromFile(GV::s+ "Resurce/Blocks/Iron.png");
	world_texture[16].loadFromFile(GV::s+ "Resurce/Blocks/Silver.png");
	world_texture[17].loadFromFile(GV::s+ "Resurce/Blocks/Gold.png");
	world_texture[18].loadFromFile(GV::s+ "Resurce/Blocks/Demonite.png");
	world_texture[19].loadFromFile(GV::s+ "Resurce/Blocks/Obsidian.png");
	world_texture[20].loadFromFile(GV::s+ "Resurce/Blocks/Meteorite.png");
	world_texture[21].loadFromFile(GV::s+ "Resurce/Blocks/Hellstone.png");
	world_texture[22].loadFromFile(GV::s+ "Resurce/Blocks/Cobalt.png");
	world_texture[23].loadFromFile(GV::s+ "Resurce/Blocks/Mythril.png");
	world_texture[24].loadFromFile(GV::s+ "Resurce/Blocks/Adamantite.png");
	world_texture[25].loadFromFile(GV::s+ "Resurce/Blocks/black.png");
	// world_texture[26].loadFromFile(GV::s+ "Resurce/Blocks/Ground_with_Grass.png");
}
