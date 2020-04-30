#include <Class_Block.h>
#include <fstream>
#ifndef COBALT_BLOCK_H
#define COBALT_BLOCK_H
using namespace std;
class Cobalt_Block : public Block
{

public:
    int type = 22;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
