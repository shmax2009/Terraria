#include <Class_Block.h>
#ifndef COBWET_BLOCK_H
#define COBWET_BLOCK_H
class Cobwet_Block: public Block
{  
private:
    const int type = 5;
    public:
    int getType();
};
#endif
