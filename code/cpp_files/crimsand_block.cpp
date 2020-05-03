#include <crimsand_block.h>
#include <fstream>
using namespace std;
int Crimsand_Block::getType()
{
     return type;
}
void Crimsand_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Crimsand_Block::deserialaze(ifstream &fin)
{

}