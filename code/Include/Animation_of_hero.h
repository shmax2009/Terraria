#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <math.h>
#include <Class_Block.h>
#include <Class_Inventory.h>
#include <All_Function.h>
#include <Input_chages.h>
#include <SIOFS.h>
#include <Global_Variable.h>
#include <crete_map.h>
#include <Draw.h>
#include <Cursor_doing_in_game.h>
#include <Textur_Terrain.h>
#include <BIOF.h>
#include <Class_Hero.h>
#ifndef ANIMATION_OF_HERO_H
#define ANIMATION_OF_HERO_H
struct sizeh
{
	float h;
	float w;
};
class Hero_anim
{
public:
	Texture hairtextureanim[16];
	Texture headtextureanim[20];
	Texture boudytextureanim[14];
	Texture legstextureanim[15];
	Sprite hair;
	Sprite head;
	Sprite boudy;
	Sprite legs;
	void takeit(sizeh,Color);

	void setRot(int, int,sizeh);

	void drawhero(RenderWindow &);
};
#endif