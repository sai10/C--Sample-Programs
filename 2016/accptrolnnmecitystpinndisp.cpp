#include<iostream>
using namespace std;
class student
{
    int roll,pin;
    char name[30],city[30],state[30];
public:
    void input()
    {
        cout<<"Enter Roll Number:";
        cin>>roll;
        cout<<"Enter Name:";
        cin.getline(name,30);
        cout<<"Enter City:";
        cin.getline(city,30);
        cout<<"Enter State:";
        cin.getline(state,30);
        cout<<"Enter PIN:";
        cin>>pin;
    }
    void output()
    {
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"City:"<<city<<endl;
        cout<<"State:"<<state<<endl;
        cout<<"PIN:"<<pin<<endl;
    }
};
int main()
{
    student s;
    s.input();
    s.output();
}
