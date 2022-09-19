// Write a Program using copy constructor to copy data of an object to another object.
#include <iostream>
#include <string>
using namespace std;
class Showroom
{
public:
    long int price;
    string company;
    string model;
    Showroom()
    {
        company = "AUDI";
        model = "Audi Q7";
        price = 7500000;
    }
    Showroom(Showroom &s1)
    {
        company = s1.company;
        model = s1.model;
        price = s1.price;
    }
    void showdata()
    {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Showroom car;
    car.showdata();
    cout << "\nShowing Data from copy constructors below" << endl;
    Showroom car_copy(car);
    car_copy.showdata();
    return 0;
}