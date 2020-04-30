#include <Class_Block.h>
#include <fstream>
#ifndef GLASS_BLOCK_H
#define GLASS_BLOCK_H
using namespace std;
class Glass_Block : public Block
{

public:
    int type = 12;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
