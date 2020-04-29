#include <Class_Block.h>
#ifndef WOOD_BLOCK_H
#define WOOD_BLOCK_H
class Wood_Block: public Block
{  
private:
    const int type = 3;
    public:
    int getType();
};
#endif
