#include <Class_Block.h>
#include <fstream>
#ifndef IRON_BLOCK_H
#define IRON_BLOCK_H
using namespace std;
class Iron_Block : public Block
{

public:
    int type = 15;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
