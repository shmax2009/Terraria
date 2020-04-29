#include <Class_Block.h>
#ifndef COPPER_BLOCK_H
#define COPPER_BLOCK_H
class Copper_Block: public Block
{  
private:
    const int type = 14;
    public:
    int getType();
};
#endif
