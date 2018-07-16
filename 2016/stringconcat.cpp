#include<iostream>
#include<string.h>
using namespace std;
class str
{
    char name[30];
public:
    str(){}
    str(char fname[])
    {
        strcpy(name,fname);
    }
void output()
{
    cout<<name<<endl;;
}
str operator + (str s)
{
    str temp;
    strcpy(temp.name,name);
    strcat(temp.name,s.name);
    return temp;
}
};
int main()
{
    str s1("I AM");
    str s2(" GREAT");
    str s3;
    cout<<"string 1 is-";
    s1.output();
    cout<<"string 2 is-";
    s2.output();
    s3=s1+s2;
    cout<<"After concatenation string is :";
    s3.output();
}
