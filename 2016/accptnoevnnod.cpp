#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0 && n!=0&&n!=1)
        cout<<"It is even";
    else
        cout<<"It is odd";
}
