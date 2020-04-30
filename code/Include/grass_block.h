#include <Class_Block.h>
#include <fstream>
#ifndef GRASS_BLOCK_H
#define GRASS_BLOCK_H
using namespace std;
class Grass_Block : public Block
{

public:
    int type = 26;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
