#include <Class_Block.h>
#ifndef SAND_BLOCK_H
#define SAND_BLOCK_H
class Sand_Block: public Block
{  
private:
    const int type = 4;
    public:
    int getType();
};
#endif
