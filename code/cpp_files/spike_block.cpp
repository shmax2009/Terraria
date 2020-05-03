#include <spike_block.h>
#include <fstream>
using namespace std;
int Spike_Block::getType()
{
     return type;
}
void Spike_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Spike_Block::deserialaze(ifstream &fin)
{

}