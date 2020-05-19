#include <Music.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <Class_Hero.h>
#include <Global_Variable.h>
#include <Class_Biom.h>
#include <create_map.h>
#include <Animation_of_hero.h>
#include <Class_Hero.h>

void Music_of_game::conect()
{
    music[0].openFromFile(GV::s+ "Resurce/Musics/Day.wav");
    music[0].setLoop(true);
    music[0].play();
    music[1].openFromFile(GV::s+ "Resurce/Musics/Night.wav");
    music[1].setLoop(true);
    music[2].openFromFile(GV::s+ "Resurce/Musics/Desert.wav");
    music[2].setLoop(true);
    music[3].openFromFile(GV::s+ "Resurce/Musics/Hell.wav");
    music[3].setLoop(true);
}

void Music_of_game::Music_play(int it, Hero h, Biom *biom)
{
    if (it % 1000 == 999)
    {
        music[GV::day].stop();
        GV::day = (GV::day + 1) % 2;
        music[GV::day].play();
    }
    int xmc;
    int ymc;
    xmc = (int)(h.getPosx()) / (24 / GV::size);
    ymc = (int)(h.getPosy()) / (48 / GV::size);
    if (whatsthetype(abs(xmc), abs(ymc), biom, GV::col_biom) == 4)
    {
        music[1].stop();
        music[0].stop();
        if (music[2].getStatus() == 0)
        {
            music[2].play();
        }
    }
    else
    {
        if (whatsthetype(abs(xmc), abs(ymc), biom, GV::col_biom) == 21)
        {
            music[1].stop();
            music[0].stop();
            music[2].stop();
            if (music[3].getStatus() == 0)
            {
                music[3].play();
            }
        }
        else
        {
            music[2].stop();
            music[3].stop();
            if (music[GV::day].getStatus() == 0)
            {
                music[GV::day].play();
            }
        }
    }
}