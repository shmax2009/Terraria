#include <Class_Block.h>
#include <fstream>
#ifndef EBONSTONE_BLOCK_H
#define EBONSTONE_BLOCK_H
using namespace std;
class Ebonstone_Block : public Block
{

public:
    int type = 11;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
