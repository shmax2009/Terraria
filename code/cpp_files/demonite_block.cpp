#include <demonite_block.h>
#include <fstream>
using namespace std;
int Demonite_Block::getType()
{
     return type;
}
void Demonite_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Demonite_Block::deserialaze(ifstream &fin)
{

}