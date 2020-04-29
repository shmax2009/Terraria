#include <Class_Block.h>
#ifndef DEMONITE_BLOCK_H
#define DEMONITE_BLOCK_H
class Demonite_Block :public Block
{  
private:
    const int type = 18;
    public:
    int getType();
};
#endif
