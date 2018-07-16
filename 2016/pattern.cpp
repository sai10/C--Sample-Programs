#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<j;
        for(l=i-1;l>=1;l--)
            cout<<l;
        cout<<"\n";
    }
}
