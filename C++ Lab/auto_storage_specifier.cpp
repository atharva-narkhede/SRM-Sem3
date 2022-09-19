#include <iostream>
using namespace std;
void auto_storage()
{
    auto _int = 10;
    auto _double = 1.23456;
    auto _char = 'A';
    auto _string = "Atharva";
    cout << "Number :" << _int << endl;
    cout << "Decimal :" << _double << endl;
    cout << "Character :" << _char << endl;
    cout << "String :" << _string << endl;
}
int main()
{
    auto_storage();
    return 0;
}