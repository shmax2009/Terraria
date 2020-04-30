#include <Class_Block.h>
#include <fstream>
#ifndef NIGHT_BLOCK_H
#define NIGHT_BLOCK_H
using namespace std;
class Night_Block : public Block
{

public:
    int type = 25;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
