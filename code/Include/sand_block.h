#include <Class_Block.h>
#include <fstream>
#ifndef SAND_BLOCK_H
#define SAND_BLOCK_H
using namespace std;
class Sand_Block : public Block
{

public:
    int type = 4;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
