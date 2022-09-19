#include <iostream>
using namespace std;
int Binary_Search(int a[], int l, int r, int key)
{
    int m;
    if (key < a[l] || key > a[r])
    {
        return -1;
    }
    m = (l + r) / 2;
    if (a[m] < key)
    {
        return Binary_Search(a, m + 1, r, key);
    }
    else if (a[m] > key)
    {
        return Binary_Search(a, l, m - 1, key);
    }
    else
    {
        return m;
    }
}
int main()
{
    int num;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "Enter number to find: ";
    cin >> num;
    cout << Binary_Search(arr, 0, 9, num);

    return 0;
}