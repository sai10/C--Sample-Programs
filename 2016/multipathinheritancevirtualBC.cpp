
/* address is grand base class  and  student and employee are hierarchy of it.
college is grand derived class having multiple inheritance from student and employee   */



#include<iostream>
using namespace std;
class address
{
    int pin;
    char city[30],state[30];
public:
    void input1()
    {
        cout<<"ENTER CITY:";
        cin.getline(city,30);
        cout<<"ENTER STATE:";
        cin.getline(state,30);
        cout<<"ENTER PINCODE:";
        cin>>pin;
    }
    void output1()
    {
        cout<<"CITY="<<city<<endl;
        cout<<"STATE="<<state<<endl;
        cout<<"PINCODE="<<pin<<endl;
    }
};
class student : public virtual address
{
    int roll;
    char name[30];
public:
    void input2()
    {
        cout<<"ENTER ROLL NUMBER:";
        cin>>roll;
        cin.get();
        cout<<"ENTER NAME:";
        cin.getline(name,30);
        input1();

    }
    void output2()
    {
        cout<<"ROLL NUMBER:"<<roll<<endl;
        cout<<"NAME:"<<name<<endl;
        output1();
    }
};
class employee : public virtual address
{
    int id;
    char name[30];
public:
    void input4()
    {
        cout<<"ENTER ID:";
        cin>>id;
        cin.get();
        cout<<"ENTER NAME:";
        cin.getline(name,30);
        input1();
    }
    void output4()
    {
        cout<<"ID:"<<id<<endl;
        cout<<"NAME:"<<name<<endl;
        output1();
    }
};
class college : public student , public employee
{
    char name[30];
public:
    void input3()
    {
        cin.get();
        cout<<"ENTER COLLEGE NAME:";
        cin.getline(name,30);
        input1();
        cout<<"\nSTUDENT\n";
        input2();
        cout<<"\nEMPLOYEE\n";
        input4();
    }
    void output3()
    {
        cout<<"\n\n\n\nCOLLEGE NAME:"<<name<<endl;
        output1();
        cout<<"\nSTUDENT\n";
        output2();
        cout<<"\nEMPLOYEE\n";
        output4();

    }
};

int main()
{
 college c;
c.input3();
c.output3();
}

