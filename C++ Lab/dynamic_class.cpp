/*Write a Program to allocate memory dynamically for an object of a given class using class’s
constructor.*/

#include <iostream>
#include <string>
using namespace std;
class Showroom
{
public:
    long int price;
    string company;
    string model;

    void getdata()
    {
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Price: ";
        cin >> price;
        cout << endl;
    }

    void showdata()
    {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

int main()
{
    Showroom car1, car2;
    car1.getdata();
    car1.showdata();
    car2.getdata();
    car2.showdata();
    return 0;
}