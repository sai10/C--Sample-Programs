#include<iostream>
using namespace std;
class one
{
    int x;
public:
    one()
    {
        x=4;
    }
    void display()
    {
        cout<<"\nx="<<x<<endl;
    }
    ~one(){};
};
class two
{
    int y;
public:
    two()
    {
        y=5;
    }
    void display1()
    {
        cout<<"\ny="<<y<<endl;
    }
    ~two(){};
};
class three: public two, public one
{
    int z;
public:
    three()
    {
        z=6;
    }
    void display2()
    {
        display();
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


