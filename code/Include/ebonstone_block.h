#include <Class_Block.h>
#ifndef EBONSTONE_BLOCK_H
#define EBONSTONE_BLOCK_H
class Ebonstone_Block: public Block
{  
private:
    const int type = 11;
    public:
    int getType();
};
#endif
