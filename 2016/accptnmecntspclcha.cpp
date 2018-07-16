#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    char name[100];
    int i,c=0;
    cout<<"Enter the sentence:";
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
     if((name[i]<'A' || name[i]>'Z')&&(name[i]<'a'||name[i]>'z')&&(name[i]<'0'||name[i]>'9'))
           c++;
    }
    cout<<"Number of special characters are:"<<c;
}
