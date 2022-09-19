// 4. To find the factorial of a given integer.

#include <iostream>
using namespace std;

int main()
{
    int i, n, f = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout << "Answer = " << f;
    return 0;
}