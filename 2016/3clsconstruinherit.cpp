#include<iostream>
using namespace std;
class one
{
protected:
    int x;
public:
    one()
    {
        x=5;
    }
    void display()
    {
        cout<<"\nx="<<x<<endl;
    }
    ~one(){};
};
class two:public one
{
protected:
    int y;
public:
    two():one()
    {
        y=x;
    }
    void display1()
    {
        display();
        cout<<"\ny="<<y<<endl;
    }
    ~two(){};
};
class three:public two
{
    int z;
public:
    three():two()
    {
        z=y;
    }
    void display2()
    {
        display1();
        cout<<"\nz="<<z<<endl;
    }
    ~three(){}
};
int main()
{
    three t;
    t.display2();
}

