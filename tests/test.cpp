#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Numbers
{
public:
    virtual void getType() = 0;
};
class N1 : public Numbers
{
public:
    int type = 1;
    void getType()
    {
        cout << type << endl;
    }
};

class N2 : public Numbers
{
public:
    int type = 2;
    void getType()
    {
        cout << type << endl;
    }
};

class Fabric
{
public:
    static Numbers *crete(int i)
    {
        Numbers *p;
        switch (i)
        {
        case 1:
            p = new N1;
            break;

        case 2:
            p = new N2;
            break;

        default:
            break;
        }
        return p;
    }
};

int main()
{
    Numbers **arr = new Numbers *[5];
    for (int i = 0; i < 5; i++)
    {

        arr[i] = Fabric::crete(rand() % 2 + 1);
    }
    //
    //    arr[0]=Fabric::crete(1);

    for (int i = 0; i < 5; i++)
    {

        arr[i]->getType();
    }
    return 0;
}
