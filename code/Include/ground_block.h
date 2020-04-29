#include <Class_Block.h>
#ifndef GROUND_BLOCK_H
#define GROUND_BLOCK_H
class Ground_Block: public Block
{  
private:
    const int type = 1;
    public:
    int getType();
};
#endif
