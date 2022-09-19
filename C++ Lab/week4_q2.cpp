#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    void setvalue(int i) { x = i; }
    friend void max(XYZ, ABC);
};

class ABC
{
    int a;

public:
    void setvalue(int i) { a = i; }
    friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
    if (m.x >= n.a)
        cout << m.x << endl;
    else
        cout << n.a << endl;
}

int main()
{
    ABC abc;
    abc.setvalue(25);

    XYZ xyz;
    xyz.setvalue(50);

    max(xyz, abc);
    return 0;
}