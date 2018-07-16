#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char name[100],fname[100];
    int i=0,c=0,j=0,k=0;
    cout<<"Enter the sentence:";
    gets(name);
    if(i==0)
    {
        while(name[i]!=' ')
        {
            fname[j]=name[i];
            c++;
            j++;
            i++;
        }
    }
    fname[j]='\0';
    cout<<"\n\n"<<fname<<"="<<c;
        i=i+1;
   while(name[i]!='\0')
        {
            c=0;
            while(name[i]!=' ' && name[i]!='\0')
            {
                fname[k]=name[i];
                c++;
                k++;
                i++;
            }
            fname[k]='\0';
            cout<<"\n\n"<<fname<<"="<<c;
            i++;
            if(name[i-1]=='\0')
                break;
            k=0;
        }
}
