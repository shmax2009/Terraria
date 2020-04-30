#include <Class_Block.h>
#include <fstream>
#ifndef OBSIDIAN_BLOCK_H
#define OBSIDIAN_BLOCK_H
using namespace std;
class Obsidian_Block : public Block
{

public:
    int type = 19;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
