#include <Mythril_block.h>
#include <fstream>
using namespace std;
int Mythril_Block::getType()
{
     return type;
}
void Mythril_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Mythril_Block::deserialaze(ifstream &fin)
{

}