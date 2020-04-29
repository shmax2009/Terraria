#include <Class_Block.h>
#ifndef SILVER_BLOCK_H
#define SILVER_BLOCK_H
class Silver_Block :public Block
{  
private:
    const int type = 16;
    public:
    int getType();
};
#endif
