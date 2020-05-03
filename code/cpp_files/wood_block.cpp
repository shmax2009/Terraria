#include <wood_block.h>
#include <fstream>
using namespace std;
int Wood_Block::getType()
{
     return type;
}
void Wood_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Wood_Block::deserialaze(ifstream &fin)
{

}