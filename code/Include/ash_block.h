#include <Class_Block.h>
#ifndef ASH_BLOCK_H
#define ASH_BLOCK_H
class Ash_Block: public Block
{  
private:
    const int type = 10;
    public:
    int getType();
};
#endif
