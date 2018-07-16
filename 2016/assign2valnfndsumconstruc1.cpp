#include<iostream>
using namespace std;
class any
{
    int a,b,s;
public:
    any()
    {
        a=5;b=4;
    }
    void sum()
    {
        s=a+b;
    }
    void display()
    {
        cout<<"First number is="<<a<<endl;
        cout<<"second number is="<<b<<endl;
        cout<<"Sum is:"<<s;
    }
};
int main()
{
    any obj1;
    obj1.sum();
    obj1.display();
}

