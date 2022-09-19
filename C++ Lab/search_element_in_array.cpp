// 3. Searching an element in an array.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the size of an Array: ";
    cin >> a;
    int arr[a];
    cout << "Enter the elements of an Array: ";
    for (b = 0; b < a; b++)
    {
        cin >> arr[b];
    }
    cout << "\nEnter the element to be searched: ";
    cin >> c;
    for (b = 1; b <= a; b++)
    {
        if (arr[b] == c)
        {
            cout << "Element Found at index position: " << b;
            return 0;
        }
    }
    cout << "Oops Element doesn't exist in array" << endl;
}
