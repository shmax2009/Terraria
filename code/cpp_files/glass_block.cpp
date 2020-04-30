#include <glass_block.h>

int Glass_Block::getType()
{
     return type;
}
void Glass_Block::serialaze(ofstream &fout)
{
     fout <<type<<" ";
}
void Glass_Block::deserialaze(ifstream &fin)
{

}