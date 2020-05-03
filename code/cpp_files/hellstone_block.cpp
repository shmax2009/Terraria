#include <hellstone_block.h>
#include <fstream>
using namespace std;
int Hellstone_Block::getType()
{
     return type;
}
void Hellstone_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Hellstone_Block::deserialaze(ifstream &fin)
{

}