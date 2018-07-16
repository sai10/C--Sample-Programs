#include<iostream>
using namespace std;
class one
{
int a;
public:
one(int a)
{
    this->a=a;
}
void display()
{
    cout<<"a="<<this->a;
}
};
int main()
{
    one t(5);
    t.display();
}

