#include <Class_Block.h>
#include <fstream>
#ifndef ADAMANTITE_BLOCK_H
#define ADAMANTITE_BLOCK_H
using namespace std;
class Adamantite_Block : public Block
{

public:
    int type = 24;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
