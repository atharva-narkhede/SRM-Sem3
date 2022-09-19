/*1. Takes two integer operands and one operator form the user, performs the operation and then
prints the result.*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char ch;
    cout << "Enter first number ";
    cin >> a;
    cout << "\nEnter second number ";
    cin >> b;
    cout << "\nSelect one operation '+' '-' '*' '/' ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "Addition of " << a << " and " << b << " is " << a + b;
        break;
    case '-':
        cout << "Subtraction of " << a << " and " << b << " is " << a - b;
        break;
    case '*':
        cout << "Multiplication of " << a << " and " << b << " is " << a * b;
        break;
    case '/':

        cout << "Division of " << a << " and " << b << " is " << a / b;
        break;
    default:
        cout << "!!! Select appropriate option !!!";
    }

    return 0;
}
