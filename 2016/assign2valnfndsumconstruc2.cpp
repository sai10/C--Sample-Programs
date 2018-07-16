#include<iostream>
using namespace std;
class one
{
    int a,b,s;
public:
    one(int m,int n)
    {
        a=m;
        b=n;
    }
    void sum()
    {
        s=a+b;
    }
    void display()
    {
        cout<<"NUMBER 1 is:"<<a<<endl;
        cout<<"NUMBER 2 is:"<<b<<endl;
        cout<<"SUM is:"<<s<<endl;
    }
};
int main()
{
    one obj1(5,4);
    obj1.sum();
    obj1.display();
}
