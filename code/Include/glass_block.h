#include <Class_Block.h>
#ifndef GLASS_BLOCK_H
#define GLASS_BLOCK_H
class Glass_Block: public Block
{  
private:
    const int type = 12;
    public:
    int getType();
};
#endif
