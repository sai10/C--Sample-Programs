#include<iostream>
using namespace std;
class one
{
protected:
    int x;
public:
    one(int i)
    {
       x=i;
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
    two(int i,int j):one(i)
    {
        y=j;
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
    two t(5,4);
    t.display1();
}


