#include<iostream>
using namespace std;
class B
{
public:
    int num;
    B(){}
    B(int a)
    {
        cout<<"Constructer B(int a) is invoked"<<endl;
        num=a;
    }
};
class D
{
    int data1;
    B objb;
public:
    D(int a):objb(a)
    {
        data1=a;
    }
    void output()
    {
        cout<<"Data in object of class D="<<data1<<endl;
        cout<<"Data in Member object of class B in class D="<<objb.num<<endl;
    }
};
int main()
{
    D objd(10);
    objd.output();
}
