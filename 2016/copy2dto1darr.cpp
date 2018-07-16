#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,a[4][4],b[16];
    cout<<"Enter 16 elements for  a 4X4 2D matrix";
    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            cin>>a[i][j];
        }
    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
              cout<<"   "<<a[i][j];

            cout<<"\n\n";
        }
    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                b[k]=a[i][j];
                k++;
            }
        }
    cout<<"After copying 2D array to 1D array:";
    for(i=0;i<16;i++)
        cout<<"  "<<b[i];
}

