#include<iostream>
using namespace std;
int main()
{
    int c=0,i,n;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c<=2 && c!=0 && c!=1)
        cout<<"It is a prime number";
    else if(c!=0 && c!=1)
        cout<<"It is a composite number";
}
