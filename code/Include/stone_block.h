#include <Class_Block.h>
#include <fstream>
#ifndef STONE_BLOCK_H
#define STONE_BLOCK_H
using namespace std;
class Stone_Block : public Block
{

public:
    int type = 2;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
