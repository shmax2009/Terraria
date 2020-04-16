#ifndef CLASS_BLOCK_H
#define CLASS_BLOCK_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>

using namespace std;
using namespace sf;

class Block
{
private:
	int type;

public:
	void setType(int x);
	int getType();
};

#endif
