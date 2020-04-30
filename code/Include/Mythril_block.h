#include <Class_Block.h>
#include <fstream>
#ifndef MYTHRIL_BLOCK_H
#define MYTHRIL_BLOCK_H
using namespace std;
class Mythril_Block : public Block
{

public:
    int type = 23;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
