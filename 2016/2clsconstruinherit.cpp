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
int main()
{
    two t;
    t.display1();
}

