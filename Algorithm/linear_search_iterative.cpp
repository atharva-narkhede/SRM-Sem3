#include <iostream>
#include <ctime>
using namespace std;

int iterative_linearsearch(int A[], int l, int r, int key)
{
    for (int i = l; i <= r; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    cout << "Enter number to find: ";
    cin >> n;
    int start = clock();
    cout << iterative_linearsearch(arr, 0, 9, n);
    int stop = clock();
    double time = double(stop - start) / CLOCKS_PER_SEC;
    cout << endl
         << "Time Taken: " << time;
    return 0;
}