#include <cobwet_block.h>
#include <fstream>
using namespace std;
int Cobwet_Block::getType()
{
     return type;
}
void Cobwet_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Cobwet_Block::deserialaze(ifstream &fin)
{

}