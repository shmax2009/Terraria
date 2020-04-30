#include <Class_Block.h>
#include <fstream>
#ifndef METIORITE_BLOCK_H
#define METIORITE_BLOCK_H
using namespace std;
class Metiorite_Block : public Block
{

public:
    int type = 20;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
