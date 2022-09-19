#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    mutable int b;

    Test()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    const Test t1;
    cout << "Value Before: " << t1.b << endl;
    t1.b = 50;
    cout << "Value After: " << t1.b << endl;
    return 0;
}
