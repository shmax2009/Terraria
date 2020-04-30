#include <gold_block.h>
#include <fstream>
using namespace std;
int Gold_Block::getType()
{
     return type;
}
void Gold_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Gold_Block::deserialaze(ifstream &fin)
{

}