#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <Class_Hero.h>
#include <Global_Variable.h>
#include <Class_Biom.h>
#include <create_map.h>
#include <Animation_of_hero.h>
using namespace sf;
#ifndef MUSIC_H
#define MUSIC_H
class Music_of_game
{

Music music[4];
public:
	void conect();

	void Music_play(int it,Hero_anim h,Biom *biom);
};
#endif