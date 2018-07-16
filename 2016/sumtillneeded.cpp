#include<iostream>
using namespace std;
int main()
{
    int s,a,b,i=0;
    do
    {
        cout<<"Enter 2 numbers:";
        cin>>a>>b;
        s=a+b;
        cout<<"sum is:"<<s;
        cout<<"\n\nDo you want to add another:";
        cout<<"\n\nenter 0 to add";
        cout<<"\nenter 1 to break";
        cin>>i;
    }while(i==0);
}
