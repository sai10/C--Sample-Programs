#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<0)
        cout<<"Number is negative";
    else if(n==0)
        cout<<"Number is neither positive nor negative";
    else
        cout<<"Number is positive";
}
