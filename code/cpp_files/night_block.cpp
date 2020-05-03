
#include <night_block.h>
#include <fstream>
using namespace std;
int Night_Block::getType()
{
     return type;
}
void Night_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Night_Block::deserialaze(ifstream &fin)
{

}