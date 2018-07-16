#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],c[10],i,j,d=0,temp;
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            d++;
    }
    for(i=0,j=0;i<10,j<d;i++)
    {
        if(a[i]%2==0)

            {b[j]=a[i];
            j++;}

    }
    for(i=0,j=0;i<10,j<(10-d);i++)
          {
              if(a[i]%2!=0)
              {c[j]=a[i];j++;}
          }

    for(i=0,j=0;i<10,j<d;i++,j++)
    {

            a[i]=b[j];

    }
      temp=i;
        for(i=temp,j=0;i<10,j<(10-d);i++,j++)
            {
                a[i]=c[j];
            }

    for(i=0;i<10;i++)
        cout<<" "<<a[i];
}
