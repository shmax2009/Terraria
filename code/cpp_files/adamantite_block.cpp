#include <adamantite_block.h>
#include <fstream>
using namespace std;
int Adamantite_Block::getType()
{
     return type;
}
void Adamantite_Block::serialaze(ofstream &fout)
{
     fout << type <<" ";
}
void Adamantite_Block::deserialaze(ifstream &fin)
{

}