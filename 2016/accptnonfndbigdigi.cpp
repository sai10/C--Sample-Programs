#include<iostream>
using namespace std;
int main()
{
    int n,large=-99999,d;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        if(d>large)
            large=d;
        n=n/10;
    }
    cout<<"Bigger digit is : "<<large;
}
