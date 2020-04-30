#include <Class_Block.h>
#include <fstream>
#ifndef WOOD_BLOCK_H
#define WOOD_BLOCK_H
using namespace std;
class Wood_Block : public Block
{

public:
    int type = 3;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
