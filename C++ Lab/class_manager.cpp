/*Write a Program which creates & uses array of object of a class.( for eg. implementing the
list of Managers of a Company having details such as Name, Age, etc..).*/

#include <iostream>
using namespace std;
class Office
{
    char name[25];
    int age = 0;

public:
    void getdata(void)
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "\nEnter Age: ";
        cin >> age;
    }
    void display(void)
    {
        cout << name << endl;
        cout << age << endl;
    }
};
int main()
{
    int size;
    cout << "\n-----ENTER THE DATA OF MANAGER-----\n"
         << endl;
    cout << "Enter number of manager: ";
    cin >> size;
    Office manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Manager " << i + 1 << endl;
        manager[i].getdata();
    }
    cout << "\n-----DISPLAYING THE DATA-----\n"
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Manager " << i + 1 << endl;
        manager[i].display();
    }

    return 0;
}