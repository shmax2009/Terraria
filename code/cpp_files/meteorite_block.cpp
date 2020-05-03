#include <metiorite_block.h>
#include <fstream>
using namespace std;
int Metiorite_Block::getType()
{
     return type;
}
void Metiorite_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Metiorite_Block::deserialaze(ifstream &fin)
{

}