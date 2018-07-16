#include<iostream>
using namespace std;
class student
{
    int roll;
    char *name;
public:
    student(int rolll,char *fname)
    {
        roll=rolll;
        name=fname;
    }
    void output()
    {
        cout<<"Roll="<<roll<<endl;
        cout<<"Name="<<name<<endl;
    }
    ~student(){};
};
int main()
{
    student s(10,"Ram_Roy"),*ptr;
    ptr=&s;
    ptr->output();
}

