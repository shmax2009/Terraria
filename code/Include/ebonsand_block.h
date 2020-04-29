#include <Class_Block.h>
#ifndef EBONSAND_BLOCK_H
#define EBONSAND_BLOCK_H
class Ebonsand_Block: public Block
{  
private:
    const int type = 6;
    public:
    int getType();
};
#endif
