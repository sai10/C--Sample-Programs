#include<iostream>
using namespace std;
class comp
{
    int re,im;
public:
    comp(){}
    comp(int a,int b)
    {
        re=a;
        im=b;
    }
    void disp()
    {
        cout<<"Complex form is:"<<endl;
        cout<<re<<"+i"<<im<<endl;
    }
    comp operator+(comp ob2)
    {
        comp text;
        text.re=re+ob2.re;
        text.im=im+ob2.im;
        return text;
    }
};
int main()
{
    comp obj1(3,5) ;
    comp obj2(2,4) ;
    comp obj3;
    obj1.disp();
    obj2.disp();
    obj3=obj1+obj2;
    obj3.disp();
}
