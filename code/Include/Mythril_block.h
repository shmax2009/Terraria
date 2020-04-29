#include <Class_Block.h>
#ifndef MYTHRIL_BLOCK_H
#define MYTHRIL_BLOCK_H
class Mythril_Block :public Block
{  
private:
    const int type = 23;
    public:
    int getType();
};
#endif
