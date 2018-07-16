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
    one calculate(one ob1,one ob2)
    {
        one temp;
        temp.a=a+ob2.a;
        temp.b=b+ob2.b;
    return (temp);
    }
};
int main()
{
    one obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj1.output();
    obj2.output();
    obj3=obj1.calculate(obj1,obj2);
    cout<<"\n\nSum is:";
    obj3.output();
}

