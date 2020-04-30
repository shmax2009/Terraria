#include <Class_Block.h>
#include <fstream>
#ifndef COBWET_BLOCK_H
#define COBWET_BLOCK_H
using namespace std;
class Cobwet_Block : public Block
{

public:
    int type = 5;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
