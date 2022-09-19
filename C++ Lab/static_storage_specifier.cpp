#include <iostream>
using namespace std;
int static_variable()
{
    static int num;
    num++;
    return num;
}
int non_static_variable()
{
    int num;
    num++;
    return num;
}

int main()
{
    cout << "Static Variables" << endl;
    cout << static_variable() << endl;
    cout << static_variable() << endl;
    cout << "Printing Non Static Variables" << endl;
    cout << non_static_variable() << endl;
    cout << non_static_variable() << endl;

    return 0;
}