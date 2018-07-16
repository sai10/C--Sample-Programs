#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
public:
    class address
{
    int pin;
    char city[30],state[30];
public:
    void input()
    {
        cin.get();
        cout<<"Enter city=";
        cin.getline(city,30);
        cout<<"Enter state=";
        cin.getline(state,30);
        cout<<"Enter pin code=";
        cin>>pin;
    }
    void output()
    {
        cout<<"city="<<city<<endl;
        cout<<"State="<<state<<endl;
        cout<<"pin="<<pin<<endl;
    }
}a;
    void input()
    {
        cout<<"Enter roll=";
        cin>>roll;
        cin.get();
        cout<<"Enter name:";
        cin.getline(name,30);
        a.input();
    }
    void output()
    {
        cout<<"Roll="<<roll<<endl;
        cout<<"Name="<<name<<endl;
        a.output();
    }
};
int main()
{
    student s;
    s.input();
    s.output();
}


