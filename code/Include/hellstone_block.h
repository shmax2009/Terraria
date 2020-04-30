#include <Class_Block.h>
#include <fstream>
#ifndef HELLSTONE_BLOCK_H
#define HELLSTONE_BLOCK_H
using namespace std;
class Hellstone_Block : public Block
{

public:
    int type = 21;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
