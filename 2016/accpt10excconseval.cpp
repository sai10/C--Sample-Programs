#include<iostream>
using namespace std;
int main()
{
    int a[10],i,temp;
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i=i+2;

    }
    for(i=0;i<10;i++)
 cout<<" "<<a[i];

}
