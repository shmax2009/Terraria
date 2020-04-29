#include <Class_Block.h>
#ifndef CRIMSAND_BLOCK_H
#define CRIMSAND_BLOCK_H
class Crimsand_Block: public Block
{  
private:
    const int type = 7;
    public:
    int getType();
};
#endif
