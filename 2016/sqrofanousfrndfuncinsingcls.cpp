#include<iostream>
using namespace std;
class one
{
    int a;
public:
    void input()
    {
        cout<<"a=";
        cin>>a;
    }
    friend int sum(one t);
};
int sum(one t)
{
   int s;
    return t.a*t.a;
}
int main()
{
    one t;
    t.input();
    cout<<"Square of a :"<<sum(t);
}
