//4. To find the factorial of a given integer.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int i,n,f=1;
    cout<<"Enter a number: ";
    cin>>n;
    int start=clock();
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"Answer = "<<f<<endl;
    int stop= clock();
    cout<<"Time Taken: "<<(double)(stop-start)/(CLOCKS_PER_SEC);
    return 0;

}