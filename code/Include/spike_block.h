#include <Class_Block.h>
#ifndef SPIKE_BLOCK_H
#define SPIKE_BLOCK_H
class Spike_Block: public Block
{  
private:
    const int type = 13;
    public:
    int getType();
};
#endif
