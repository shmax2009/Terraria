#include <ash_block.h>
#include <fstream>
using namespace std;
int Ash_Block::getType()
{
     return type;
}
void Ash_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Ash_Block::deserialaze(ifstream &fin)
{

}