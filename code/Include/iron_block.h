#include <Class_Block.h>
#ifndef IRON_BLOCK_H
#define IRON_BLOCK_H
class Iron_Block :public Block
{  
private:
    const int type = 15;
    public:
    int getType();
};
#endif
