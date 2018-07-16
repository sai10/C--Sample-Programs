#include<iostream>
using namespace std;
class one
{
    int a;
    float b;
public:
    void input()
    {
        cout<<"Enter a Integer Value:";
        cin>>a;
        cout<<"Enter a Float Value:";
        cin>>b;
    }
    void output()
    {
        cout<<"\nGiven Integer Value="<<a;
        cout<<"\nGiven Floating Value="<<b;
    }
    void calculate(one ob1,one ob2)
    {
        a=ob1.a+ob2.a;
        b=ob1.b+ob2.b;
    }
};
int main()
{
    one obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj1.output();
    obj2.output();
    obj3.calculate(obj1,obj2);
    cout<<"\n\nSum is:";
    obj3.output();
}
