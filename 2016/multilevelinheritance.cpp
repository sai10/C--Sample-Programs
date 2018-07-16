//college is grand base class and student is grand derived class

#include<iostream>
using namespace std;
class college
{
    char name[30];
public:
    void input3()
    {
        cin.get();
        cout<<"ENTER COLLEGE NAME:";
        cin.getline(name,30);
    }
    void output3()
    {
        cout<<"\n\n\n\nCOLLEGE NAME:"<<name<<endl;
    }
};
class address : public college
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
class student : public address
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
    }
    void output2()
    {
        cout<<"ROLL NUMBER:"<<roll<<endl;
        cout<<"NAME:"<<name<<endl;
    }
};

int main()
{
    student s;
    s.input3();
    s.input2();
    s.input1();
    s.output3();
    s.output2();
    s.output1();
}
