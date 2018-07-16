#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i,j;
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<5;i++)
        b[i]=a[i];
    for(i=5,j=0;i<10,j<5;i++,j++)
            a[j]=a[i];

    for(j=5,i=0;j<10,i<5;j++,i++)
    {
            a[j]=b[i];
    }
    for(i=0;i<10;i++)
        cout<<a[i];
}
