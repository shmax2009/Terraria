#include <stone_block.h>
#include <fstream>
using namespace std;
int Stone_Block::getType()
{
     return type;
}
void Stone_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Stone_Block::deserialaze(ifstream &fin)
{

}