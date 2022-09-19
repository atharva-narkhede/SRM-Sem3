#include<iostream>

using namespace std;
int main()
{
int a,b,sum,sub,mul,mdiv;
float div;
cout<<"Enter 2 values "<<endl;
cin>>a>>b;
sum=a+b;
sub=a-b;
mul=a*b;
mdiv=a%b;
div=a/(float)b;
cout<<"Sum= "<<sum<<endl;
cout<<"Subtraction= "<<sub<<endl;
cout<<"Multiplication= "<<mul<<endl;
cout<<"mdiv= "<<mdiv<<endl;
cout<<"Division= "<<div<<endl;
return 0;

}
