#include <Class_Block.h>
#include <fstream>
#ifndef COPPER_BLOCK_H
#define COPPER_BLOCK_H
using namespace std;
class Copper_Block : public Block
{

public:
    int type = 14;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
