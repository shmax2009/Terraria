#include <Class_Block.h>
#ifndef GRASS_BLOCK_H
#define GRASS_BLOCK_H
class Grass_Block :public Block
{  
private:
    const int type = 26;
    public:
    int getType();
};
#endif
