#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Numbers
{
public:
    virtual void getType() = 0;
    virtual void serialaze(ofstream &fout) = 0;
    virtual void deserialaze(ifstream &fin) = 0;
};
class N1 : public Numbers
{
public:
    int type = 1;
    string s = "gh";
    int arr;
    char c = '5';

    void getType()
    {
        cout << type << endl;
    }
    void serialaze(ofstream &fout)
    {
        fout << type << " " << s << " " << arr << " " << c << " ";
    }
    void deserialaze(ifstream &fin)
    {
        fin >> s >> arr >> c;
    }
};

class N2 : public Numbers
{
public:
    int type = 2;
    int y = 90;
    void getType()
    {
        cout << type << endl;
    }
    void serialaze(ofstream &fout)
    {
        fout << type << " " << y << " ";
    }
    void deserialaze(ifstream &fin)
    {
        fin >> y;
    }
};

class Fabric
{
public:
    static Numbers *create(int i)
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
bool emp(ifstream &pFile)
{
    return pFile.peek() == ifstream::traits_type::eof();
    // return pFile.peek() == EOF; ?
}
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    // Numbers **arr = new Numbers *[5];
    vector<Numbers *> arr;
    for (int i = 0; i < 5; i++)
    {
        Numbers *n;
        n = Fabric::create(1);
        arr.push_back(n);
    }
    ofstream fout;
    ifstream fin;

    //    fin.open("./test.txt");
    //     if (emp(fin))
    //     {

    // fout.open("./test.txt");

    for (int i = 0; i < 5; i++)
    {

        arr[i] = Fabric::create(1);
        // arr[i]->serialaze(fout);
    }
    //     fout.close();
    // }
    // else
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         int t = 0;
    //         fin >> t;
    //         arr[i] = Fabric::crete(t);
    //         cout<<t<<endl;
    //         arr[i]->deserialaze(fin);
    //         // arr[i]->getType();
    //     }
    //     fin.close();
    // }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = Fabric::create(1);
    }
    for (int i = 0; i < 5; i++)
    {

        arr[i]->getType();
    }
    return 0;
}