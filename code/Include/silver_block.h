#include <Class_Block.h>
#include <fstream>
#ifndef SILVER_BLOCK_H
#define SILVER_BLOCK_H
using namespace std;
class Silver_Block : public Block
{

public:
    int type = 16;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
