#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
public:
    void input()
    {
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"Enter name:";
        cin>>name;
    }
    void output()
    {
        cout<<"Roll="<<roll<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main()
{
    student s,*ptr;
    ptr=&s;
    ptr->input();
    ptr->output();
}
