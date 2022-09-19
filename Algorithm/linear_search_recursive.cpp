#include <iostream>
#include <ctime>
using namespace std;

int recursive_linearsearch(int A[], int l, int r, int key)
{
    if (l > r)
    {
        return -1;
    }
    if (A[l] == key)
    {
        return l;
    }
    return recursive_linearsearch(A, l + 1, r, key);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    cout << "Enter number to find: ";
    cin >> n;
    int start = clock();
    cout << recursive_linearsearch(arr, 0, 9, n);
    int stop = clock();
    double time = double(stop - start) / CLOCKS_PER_SEC;
    cout << endl
         << "Time Taken: " << time;
    return 0;
}