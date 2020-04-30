#include <ebonsand_block.h>
#include <fstream>
using namespace std;
int Ebonsand_Block::getType()
{
     return type;
}
void Ebonsand_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Ebonsand_Block::deserialaze(ifstream &fin)
{

}