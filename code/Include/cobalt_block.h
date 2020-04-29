#include <Class_Block.h>
#ifndef COBALT_BLOCK_H
#define COBALT_BLOCK_H
class Cobalt_Block :public Block
{  
private:
    const int type = 22;
    public:
    int getType();
};
#endif
