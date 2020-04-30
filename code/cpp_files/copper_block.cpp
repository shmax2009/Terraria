#include <copper_block.h>
#include <fstream>
using namespace std;
int Copper_Block::getType()
{
     return type;
}
void Copper_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Copper_Block::deserialaze(ifstream &fin)
{

}