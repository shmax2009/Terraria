#include <Class_Block.h>
#include <fstream>
#ifndef GOLD_BLOCK_H
#define GOLD_BLOCK_H
using namespace std;
class Gold_Block : public Block
{

public:
    int type = 17;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
