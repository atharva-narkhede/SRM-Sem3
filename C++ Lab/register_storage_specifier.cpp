#include <iostream>
using namespace std;
void register_storage()
{
    register string name = "Atharva";
    cout << "Value stored in register variable: " << name;
}
int main()
{
    register_storage();
    return 0;
}