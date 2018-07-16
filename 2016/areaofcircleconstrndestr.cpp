#include<iostream>
using namespace std;
#define PI 3.14
class area
{
    int r;
    float A;
public:
    area(int a)
    {
        r=a;
    }
    void output()
    {
        cout<<"RDIUS IS:"<<r<<endl;
        cout<<"AREA OF THE CIRLCLE="<<(int)A<<endl;
    }
    void calculate()
    {
        A=PI*r*r;
    }
    ~area(){}
};
int main()
{
    area a(1);
    a.calculate();
    a.output();
}
