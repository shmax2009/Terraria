#include <obsidian_block.h>
#include <fstream>
using namespace std;
int Obsidian_Block::getType()
{
     return type;
}
void Obsidian_Block::serialaze(ofstream &fout)
{
     fout<<type<<" ";
}
void Obsidian_Block::deserialaze(ifstream &fin)
{

}