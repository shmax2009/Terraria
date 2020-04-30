#include <sky_block.h>
#include <fstream>
using namespace std;
int Sky_Block::getType()
{
     return type;
}
void Sky_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Sky_Block::deserialaze(ifstream &fin)
{

}