#include <pearlsand_block.h>
#include <fstream>
using namespace std;
using namespace std;

int Pearlsand_Block::getType()
{
     return type;
}
void Pearlsand_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Pearlsand_Block::deserialaze(ifstream &fin)
{

}