#include <Class_Block.h>
#ifndef OBSIDIAN_BLOCK_H
#define OBSIDIAN_BLOCK_H
class Obsidian_Block :public Block
{  
private:
    const int type = 19;
    public:
    int getType();
};
#endif
