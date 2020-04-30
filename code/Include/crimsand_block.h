#include <Class_Block.h>
#include <fstream>
#ifndef CRIMSAND_BLOCK_H
#define CRIMSAND_BLOCK_H
using namespace std;
class Crimsand_Block : public Block
{

public:
    int type = 7;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
