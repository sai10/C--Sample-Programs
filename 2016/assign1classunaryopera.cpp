#include<iostream>
using namespace std;
class one
{
    int a;
public:
    one()
    {
        a=5;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
    one operator++()
    {
        one temp;
        temp.a=a+1;
        return temp;
    }
};
int main()
{
    one t,s;
    t.display();
    s=t++;
    s.display();
}
