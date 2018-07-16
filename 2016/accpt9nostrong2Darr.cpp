#include<iostream>
using namespace std;
int main()
{
    int n[3][3],i,j,d,e,s,temp,k;
    cout<<"Enter 9 numbers:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>n[i][j];
    }
    cout<<"strong numbers are:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp=n[i][j];
            s=0;
            while(n[i][j]!=0)
            {
            e=1;
            d=n[i][j]%10;
            for(k=d;k>=1;k--)
                e=e*k;
            s=s+e;
            n[i][j]=n[i][j]/10;
        }
        n[i][j]=temp;
        if(s==n[i][j] && n[i][j]!=0 && n[i][j]!=1)
        cout<<"\n"<<n[i][j];
    }
}
}
