#include<iostream>
using namespace std;
class one
{
public:
    void virtual output()
    {
        cout<<"HELLO\n";
    }
};
class two:public one
{
public:
    void output()
    {
        cout<<"HELLO ONCE AGAIN\n";
    }
};
int main()
{
    one m,*ptr;
    two n;
    ptr=&m;
    ptr->output();
    ptr=&n;
    ptr->output();

}


