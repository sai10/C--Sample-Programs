#include<iostream>
using namespace std;
class point
{
public:
    void virtual display()
    {
        cout<<"point\n";
    }
};
class line:public point
{
public:
    void display()
    {
        cout<<"line\n";
    }
};
class triangle:public point
{
public:
    void display()
    {
        cout<<"triangle\n";
    }
};
class rectangle:public point
{
public:
    void display()
    {
        cout<<"rectangle\n";
    }
};
class circle:public point
{
public:
    void display()
    {
        cout<<"circle\n";
    }
};
int main()
{
    int i;
    point p;
    line l;
    triangle t;
    rectangle r;
    circle c;
    point *ptr[]={&p,&l,&t,&r,&c};
    cout<<"\nFIGURES ARE:\n";
    for(i=0;i<5;i++)
        ptr[i]->display();
}


