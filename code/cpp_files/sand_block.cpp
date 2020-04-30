#include <sand_block.h>
#include <fstream>
using namespace std;
int Sand_Block::getType()
{
     return type;
}
void Sand_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Sand_Block::deserialaze(ifstream &fin)
{

}