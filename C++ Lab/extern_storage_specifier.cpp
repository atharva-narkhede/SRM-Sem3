#include <iostream>
using namespace std;
int num = 0;
void extern_storage()
{
    extern int num; // called external variable
    cout << "Original value of num variable = " << num << endl;
    num = 10; // changing the value of num variable
    cout << "New value of num = " << num << endl;
}
int main()
{
    extern_storage();
    return 0;
}