#include <iostream>
using namespace std;
class test
{
    int objno;
    static int objcnt;

public:
    test()
    {
        objno = ++objcnt;
    }
    ~test()
    {
        --objcnt;
    }
    void printobjectnumber()
    {
        cout << "Object Number: " << objno << endl;
    }
    static void printobjectcount()
    {
        cout << "objectcount: " << objcnt << endl;
    }
};
int test::objcnt;

int main()
{
    test t1, t2;
    test::printobjectcount();
    test t3;
    test::printobjectcount();
    t1.printobjectnumber();
    t2.printobjectnumber();
    t3.printobjectnumber();

    return 0;
}