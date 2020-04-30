#include <Class_Block.h>
#include <fstream>
#ifndef EBONSAND_BLOCK_H
#define EBONSAND_BLOCK_H
using namespace std;
class Ebonsand_Block : public Block
{

public:
    int type = 6;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
