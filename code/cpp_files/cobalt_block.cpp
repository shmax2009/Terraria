#include <cobalt_block.h>
#include <fstream>
using namespace std;
int Cobalt_Block::getType()
{
     return type;
}
void Cobalt_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Cobalt_Block::deserialaze(ifstream &fin)
{

}