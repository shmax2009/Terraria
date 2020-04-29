#include <Class_Block.h>
#ifndef METIORITE_BLOCK_H
#define METIORITE_BLOCK_H
class Metiorite_Block :public Block
{  
private:
    const int type = 20;
    public:
    int getType();
};
#endif
