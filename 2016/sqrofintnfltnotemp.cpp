#include<iostream>
using namespace std;
template <class T>
void square (T x)
{
    cout<<x*x;
}
int main()
{
    int a;
    float b;
    cout<<"Enter int val:";
    cin>>a;
    cout<<"\nSQUARE IS:";
    square(a);
    cout<<"\nEnter float val";
    cin>>b;
    cout<<"\nSQUARE IS:";
    square(b);
}
