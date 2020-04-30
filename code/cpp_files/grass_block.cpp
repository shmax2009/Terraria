#include <grass_block.h>
#include <fstream>
using namespace std;
int Grass_Block::getType()
{
     return type;
}
void Grass_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Grass_Block::deserialaze(ifstream &fin)
{

}