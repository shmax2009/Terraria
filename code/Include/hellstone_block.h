#include <Class_Block.h>
#ifndef HELLSTONE_BLOCK_H
#define HELLSTONE_BLOCK_H
class Hellstone_Block :public Block
{  
private:
    const int type = 21;
    public:
    int getType();
};
#endif
