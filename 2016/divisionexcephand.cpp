#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw(b);
        else
        {
            r=a/b;
            cout<<"\nRESULT="<<r;
        }
    }
    catch(int a)
    {
        cerr<<"\nDIVISION BY ZERO IS NOT POSSIBLE";
    }
}
