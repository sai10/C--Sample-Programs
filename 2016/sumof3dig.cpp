#include<iostream>
using namespace std;
int main()
{
    int d,n,s=0;
    cout<<"Enter the 3 digit  number:";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    cout<<"Sum is:"<<s;
}
