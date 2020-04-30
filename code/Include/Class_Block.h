#ifndef CLASS_BLOCK_H
#define CLASS_BLOCK_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <math.h>
#include <fstream>

using namespace std;
using namespace sf;

class Block
{
public:
	virtual int getType() = 0;
	virtual void serialaze(ofstream &fout) = 0;
	virtual void deserialaze(ifstream &fin) = 0;
};

#endif
