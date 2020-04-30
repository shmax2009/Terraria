#include <Class_Block.h>
#include <fstream>
#ifndef CLAY_BLOCK_H
#define CLAY_BLOCK_H
using namespace std;
class Clay_Block : public Block
{

   

public:
  int type = 9;
    int getType();
    void serialaze(ofstream &fout);
    void deserialaze(ifstream &fin);
};
#endif
