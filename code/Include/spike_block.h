#include <Class_Block.h>

#include <fstream>
#ifndef SPIKE_BLOCK_H
#define SPIKE_BLOCK_H
using namespace std;
class Spike_Block : public Block
{

public:
    int type = 13;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
