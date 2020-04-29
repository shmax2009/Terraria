#include <Class_Block.h>
#ifndef PEARLSAND_BLOCK_H
#define PEARLSAND_BLOCK_H
class Pearlsand_Block: public Block
{  
private:
    const int type = 8;
    public:
    int getType();
};
#endif
