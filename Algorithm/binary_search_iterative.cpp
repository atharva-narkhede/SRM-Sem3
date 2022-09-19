#include <iostream>
using namespace std;
int binary_search(int A[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = (end + start) / 2;
        if (A[mid] == key)
        {
            return 1;
        }
        if (A[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int key;
    cout << "Enter number to find: ";
    cin >> key;
    if (binary_search(arr, 0, 14, key) == 1)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}