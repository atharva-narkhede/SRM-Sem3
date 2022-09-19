#include <iostream>
using namespace std;

void swapbyref(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;
    cout << "Original value: " << x << " " << y << endl;
    swapbyref(&x, &y);
    cout << "Swap by reference: " << x << " " << y << endl;
    return 0;
}
