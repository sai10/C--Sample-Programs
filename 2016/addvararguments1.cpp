#include<iostream>
#include<stdarg.h>
using namespace std;
void sum(char *msg,...)
{
    int result=0,arg;
    va_list ap;
    va_start(ap,msg);
    while((arg=va_arg(ap,int))!=0)
        result+=arg;
    cout<<msg<<result<<endl;
    va_end(ap);
}
int main()
{
    sum("The Total of 1+2+3+4+0 is:",1,2,3,4,0);
}
