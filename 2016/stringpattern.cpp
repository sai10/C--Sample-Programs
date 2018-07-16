#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[]="OBJECT-COMPUTING";
    int i,l;
    l=strlen(string);
    for(i=1;i<=l;i++)
    {
        cout.write(string,i);
        cout<<endl;
    }
}
