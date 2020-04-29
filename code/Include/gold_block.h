#include <Class_Block.h>
#ifndef GOLD_BLOCK_H
#define GOLD_BLOCK_H
class Gold_Block :public Block
{  
private:
    const int type = 17;
    public:
    int getType();
};
#endif
