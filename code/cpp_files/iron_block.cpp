#include <iron_block.h>
#include <fstream>
using namespace std;
int Iron_Block::getType()
{
     return type;
}
void Iron_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Iron_Block::deserialaze(ifstream &fin)
{

}