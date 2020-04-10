#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
using namespace std;
using namespace sf;
#ifndef CLASS_BLOCK_H 
#define CLASS_BLOCK_H

class Block
{

public:
    int type;
    void setType(int x);
    
    int getType();
   
};
#endif