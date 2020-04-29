#include <Class_Block.h>
#ifndef CLAY_BLOCK_H
#define CLAY_BLOCK_H
class Clay_Block: public Block
{  
private:
    const int type = 9;
    public:

    int getType();
};
#endif
