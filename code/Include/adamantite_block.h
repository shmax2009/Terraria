#include <Class_Block.h>
#ifndef ADAMANTITE_BLOCK_H
#define ADAMANTITE_BLOCK_H
class Adamantite_Block :public Block
{  
private:
    const int type = 24;
    public:
    int getType();
};
#endif
