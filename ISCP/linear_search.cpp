#include <iostream>
using namespace std;
int linearsearch(int *a, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int i, n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements in array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter number to find: ";
    cin >> key;
    int res;
    res = linearsearch(a, n, key);
    if (res == -1)
    {
        cout << key << " is not present in the array" << endl;
    }
    else
    {
        cout << key << " is present at index " << res << endl;
    }
    return 0;
}