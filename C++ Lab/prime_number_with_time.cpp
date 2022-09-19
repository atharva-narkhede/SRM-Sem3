// 2. Generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int i, j, n;

    cout << "Enter the number: ";
    cin >> n;
    int start = clock();
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
    int stop = clock();
    cout << "\nTime Taken: " << (double)(stop - start) / (CLOCKS_PER_SEC);
}
