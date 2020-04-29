#include <Class_Block.h>
#ifndef STONE_BLOCK_H
#define STONE_BLOCK_H
class Stone_Block :public Block
{  
private:
    const int type = 2;
    public:
    int getType();
};
#endif
