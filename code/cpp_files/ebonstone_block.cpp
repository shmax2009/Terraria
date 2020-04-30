#include <ebonstone_block.h>
#include <fstream>
using namespace std;
int Ebonstone_Block::getType()
{
     return type;
}
void Ebonstone_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Ebonstone_Block::deserialaze(ifstream &fin)
{

}