#include<iostream>
using namespace std;
#include<math.h>
int arm(int,int);
int fact(int);

int c=0;
int m=0;
int main()
{
    int n,r,s;
    cout<<"Enter the number:";
    cin>>n;
    s=fact(n);
    r=arm(n,s);
    if(r==n)
        cout<<"It is an armstrong number";
    else
        cout<<"It is not an armstrong number";
}
int arm(int n,int s)
{
    int d;
    if(n==0)
        return 0;
    else
    {
        d=n%10;
        m=m+ceil(pow(d,s));
        n=arm(n/10,s);
    }
    return m;
}
int fact(int n)
{
    if(n==0)
        return 0;
    else
    {
        n=fact(n/10);
        c++;
    }
        return c;
}

