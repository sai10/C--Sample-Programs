#include<iostream>
using namespace std;
void sqpow(int);
void sqpow(float);
int main()
{
    int a;
    float b;
    cout<<"\nEnter the integer value:";
    cin>>a;
    cout<<"\nEnter the floating value:";
    cin>>b;
    cout<<"\nSquare of integer value is:";
    sqpow(a);
    cout<<"\nSquare of floating value is:";
    sqpow(b);
}
void sqpow(int a)
{
    cout<<a*a;
}
void sqpow(float b)
{
    cout<<b*b;
}
