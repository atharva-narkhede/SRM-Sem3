#include <iostream>
using namespace std;
void swapbyval(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;
    cout << "Original value: " << x << " " << y << endl;
    swapbyval(x, y);
    cout << "Swap by value: " << x << " " << y << endl;
    return 0;
}
