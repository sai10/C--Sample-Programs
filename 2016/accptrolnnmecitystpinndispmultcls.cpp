#include<iostream>
using namespace std;
class address
{
    int pin;
    char city[30],state[30];
public:
    void input1()
    {
        cout<<"Enter CIty";
        cin.getline(city,30);
        cout<<"Enter State:";
        cin.getline(state,30);
        cout<<"Enter PIN:";
        cin>>pin;
    }
    void output1()
    {

        cout<<"City:"<<city<<endl;
        cout<<"State:"<<state<<endl;
        cout<<"PIN:"<<pin<<endl;
    }
};
class info
{
    int roll;
    char name[30];
public:
    void input2()
    {
        cout<<"Enter Roll Number:";
        cin>>roll;
        cin.get();
        cout<<"Enter Name:";
        cin.getline(name,30);
    }
    void output2()
    {
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main()
{
    address a;
    info s;
    s.input2();
    a.input1();
    s.output2();
    a.output1();
}
