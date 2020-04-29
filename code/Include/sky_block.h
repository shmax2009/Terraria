#include <Class_Block.h>
#ifndef SKY_BLOCK_H
#define SKY_BLOCK_H
class Sky_Block :public Block
{  
private:
    const int type = 0;
    public:
    int getType();
};
#endif
