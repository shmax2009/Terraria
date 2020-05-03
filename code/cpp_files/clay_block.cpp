#include <clay_block.h>
#include <fstream>
using namespace std;

int Clay_Block::getType()
{
     return type;
}
void Clay_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Clay_Block::deserialaze(ifstream &fin)
{

}