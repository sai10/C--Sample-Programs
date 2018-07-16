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
protected:
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
class three:public two
{
    int z;
public:
    three(int i,int j,int k):two(i,j)
    {
        z=k;
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
    three t(6,5,3);
    t.display2();
}


