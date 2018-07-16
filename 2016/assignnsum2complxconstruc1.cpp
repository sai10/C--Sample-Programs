#include<iostream>
using namespace std;
class comp
{
    int re,im;
public:
    comp(comp ob1,comp ob2)
    {
     re=ob1.re+ob2.re;
    im=ob1.im+ob2.im;
    }
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

};
int main()
{
    comp obj1(3,5) ;
    comp obj2(2,4) ;
    comp obj3(obj1,obj2);
    obj1.disp();
    obj2.disp();
    obj3.disp();
}

