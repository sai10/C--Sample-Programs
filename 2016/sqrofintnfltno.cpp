#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"POWER OF A NUMBER";
    cout<<"\n(1)Power of int value";
    cout<<"\n(2)Power of float value";
    cout<<"\n Enter your choice:";
    cin>>x;
    if(x==1)
        {
    int a;
    cout<<"Enter integer value-";
    cin>>a;
    cout<<"\nSquare of the integer value is="<<a*a;
        }
    else if(x==2)
       {
    float f;
    cout<<"\nEnter floating value=";
    cin>>f;
    cout<<"\nSquare of floating value is="<<f*f;
       }
}
