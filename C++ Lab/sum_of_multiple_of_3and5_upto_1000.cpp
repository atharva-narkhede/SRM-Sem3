#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    cout<<"Multiples of 3 and 5 are ";
    for(i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"\nSum of these multiple is "<<sum;
    return 0;
}