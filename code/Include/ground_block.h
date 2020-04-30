#include <Class_Block.h>
#include <fstream>
#ifndef GROUND_BLOCK_H
#define GROUND_BLOCK_H
using namespace std;
class Ground_Block : public Block
{

public:
    int type = 1;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
