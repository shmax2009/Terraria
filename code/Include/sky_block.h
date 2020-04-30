#include <Class_Block.h>
#include <fstream>
#ifndef SKY_BLOCK_H
#define SKY_BLOCK_H
using namespace std;
class Sky_Block : public Block
{

public:
    int type = 0;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
