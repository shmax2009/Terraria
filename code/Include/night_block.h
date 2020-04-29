#include <Class_Block.h>
#ifndef NIGHT_BLOCK_H
#define NIGHT_BLOCK_H
class Night_Block :public Block
{  
private:
    const int type = 25;
    public:
    int getType();
};
#endif
