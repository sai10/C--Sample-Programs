#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int n,m,s;
    cout<<"Enter two numbers:";
    cin>>n>>m;
    cout<<"LCM of two numbers is:";
    for(int i=m*n;i>0;i--)
    {
        if(i%m==0 && i%n==0)
             s=i;
    }
    cout<<s<<endl<<endl;
    cout<<"GCD of 2 numbers is:";
    int g=gcd(n,m);
    cout<<g;
}
int gcd(int n,int m)
{
    int d;
    d=m%n;
    if(d==0)
        return n;
    else
    {
        m=n;
        n=d;
        return (gcd(n,m));
    }
}
