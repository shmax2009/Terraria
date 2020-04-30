#include <Class_Block.h>
#include <fstream>
#ifndef DEMONITE_BLOCK_H
#define DEMONITE_BLOCK_H
using namespace std;
class Demonite_Block : public Block
{

public:
    int type = 18;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
