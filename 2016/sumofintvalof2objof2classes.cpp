#include<iostream>
using namespace std;
class two;
class one
{
    int a;
    friend void calculate(one obj1,two obj2);
public:
    void input()
    {
    cout<<"Enter a value for obj1=:";
    cin>>a;
    }
    void output()
    {
        cout<<"Int value of obj1="<<a<<endl;
    }
};
class two
{
    int a;
public:
    void input()
    {
    cout<<"Enter a value for obj2=:";
    cin>>a;
    }
    void output()
    {
        cout<<"Int value of obj2="<<a<<endl;
    }
    friend void calculate(one obj1,two obj2);
};
void calculate(one ob1,two ob2)
{
    int s;
    s=ob1.a+ob2.a;
    cout<<"SUM IS:"<<s;
}
int main()
{
    one obj1;
    two obj2;
    obj1.input();
    obj2.input();
    obj1.output();
    obj2.output();
    calculate(obj1,obj2);
}
