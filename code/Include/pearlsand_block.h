#include <Class_Block.h>
#include <fstream>
#ifndef PEARLSAND_BLOCK_H
#define PEARLSAND_BLOCK_H
using namespace std;
class Pearlsand_Block : public Block
{

public:
    int type = 8;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
