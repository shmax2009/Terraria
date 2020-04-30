#include <Class_Block.h>
#include <fstream>
#ifndef ASH_BLOCK_H
#define ASH_BLOCK_H
using namespace std;
class Ash_Block : public Block
{

    

public:
 int type = 10;
int getType();
void serialaze(ofstream &fout);
void deserialaze(ifstream &fin);
};
#endif
