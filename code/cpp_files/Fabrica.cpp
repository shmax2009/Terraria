#include <fabrica.h>
#include <Class_Block.h>
#include <iostream>
#include <sky_block.h>
#include <ground_block.h>
#include <stone_block.h>
#include <wood_block.h>
#include <sand_block.h>
#include <ebonsand_block.h>
#include <crimsand_block.h>
#include <pearlsand_block.h>
#include <cobwet_block.h>
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
Block* fabrica::create(int i)
{
    
    Block *p;
    switch (i)
    {
    case 0:
        p = new Sky_Block;
        break;
    case 1:
        p = new Ground_Block;
        break;
    case 2:
        p = new Stone_Block;
        break;
    case 3:
        p = new Wood_Block;
        break;
    case 4:
        p = new Sand_Block;
        break;
    case 5:
        p = new Cobwet_Block;
        break;
    case 6:
        p = new Ebonsand_Block;
        break;
    case 7:
        p = new Crimsand_Block;
        break;
    case 8:
        p = new Pearlsand_Block;
        break;
    case 9:
        p = new Clay_Block;
        break;
    case 10:
        p = new Ash_Block;
        break;
    case 11:
        p = new Ebonstone_Block;
        break;
    case 12:
        p = new Glass_Block;
        break;
    case 13:
        p = new Spike_Block;
        break;
    case 14:
        p = new Copper_Block;
        break;
    case 15:
        p = new Iron_Block;
        break;
    case 16:
        p = new Silver_Block;
        break;
    case 17:
        p = new Gold_Block;
        break;
    case 18:
        p = new Demonite_Block;
        break;
    case 19:
        p = new Obsidian_Block;
        break;
    case 20:
        p = new Metiorite_Block;
        break;
    case 21:
        p = new Hellstone_Block;
        break;
    case 22:
        p = new Cobalt_Block;
        break;
    case 23:
        p = new Mythril_Block;
        break;
    case 24:
        p = new Adamantite_Block;
        break;
    case 25:
        p = new Night_Block;
        break;
    case 26:
        p = new Grass_Block;
        break;
    default:
        break;
    }
    return p;
}