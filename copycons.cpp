#include<iostream>
using namespace std;
class one
{
    int a;
public:
    one(int x)
    {
        a=x;
    }
    one(one &p)
    {
        a=p.a;
    }
    void show()
     {
        cout<<"number is:"<<a<<endl;
    }
};
int main()
{
    one t1(10),t2(t1);
    t1.show();
    t2.show();
}

