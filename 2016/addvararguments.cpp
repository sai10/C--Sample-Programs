#include<iostream>
#include<stdarg.h>
using namespace std;
int add(int argc,...)
{
    int num,result;
    va_list args;
    va_start(args,argc);
    result=0;
    for(int i=0;i<argc;i++)
    {
        num=va_arg(args,int);
        result+=num;
    }
    va_end(args);
    return result;
}
int main()
{
    int sum1,sum2,sum3;
    sum1=add(3,1,2,3);
    cout<<"Sum1="<<sum1<<endl;
    sum2=add(1,10);
    cout<<"Sum2="<<sum2<<endl;
    sum3=(0);
    cout<<"sum3="<<sum3<<endl;
}
