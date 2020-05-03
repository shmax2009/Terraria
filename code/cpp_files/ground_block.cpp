#include <ground_block.h>
#include <fstream>
using namespace std;
int Ground_Block::getType()
{
     return type;
}
void Ground_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Ground_Block::deserialaze(ifstream &fin)
{

}