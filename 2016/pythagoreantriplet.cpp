///WAP TO FIND PYTHAGOREAN TRIPLET WHICH SATISFIES THE EQUATION  i2+j2=k2  and the range of i,j,k is 100-1000

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
   long int i,j,k;
    cout<<"PYTHAGOREAN TRIPLETS ARE:"<<endl;
    for(k=100;k<1000;k++)
    {
        for(i=100;i<=k;i++)
        {
            for(j=100;j<=k;j++)
            {
                if(ceil(pow(i,2))+ceil(pow(j,2))==ceil(pow(k,2)))
                     {
                         cout<<i<<endl;
                         cout<<j<<endl;
                         cout<<k<<endl<<endl<<endl;
                     }
            }
        }
    }
}
