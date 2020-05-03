#include <silver_block.h>
#include <fstream>
int Silver_Block::getType()
{
     return type;
}
void Silver_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Silver_Block::deserialaze(ifstream &fin)
{

}