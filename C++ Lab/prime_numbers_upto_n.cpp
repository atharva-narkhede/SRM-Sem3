// 2. Generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the number: ";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << " ";
        }
    }
}
