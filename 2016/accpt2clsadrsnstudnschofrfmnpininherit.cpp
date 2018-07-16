#include<conio.h>
#include<iostream>
using namespace std;
class address
{
    char city[30],state[30];
protected:
    int pin;
public:
    void input()
    {
        cout<<"Enter your pin:";
        cin>>pin;
        cout<<"Enter city:";
        cin.get();
        cin.getline(city,30);
        cout<<"Enter state:";
        cin.getline(state,30);
    }
    void output()
    {
        cout<<"CITY="<<city<<endl;
        cout<<"STATE="<<state<<endl;
        cout<<"PIN CODE="<<pin<<endl;
    }
};
class student : public address
{
    int roll;
    char name[30],gender;
public:
    void input1()
    {
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"Enter name:";
        cin.get();
        cin.getline(name,30);
        cout<<"Enter your gender:";
        cin>>gender;
        input();
    }
    void output1()
    {
        cout<<"\nROLL="<<roll<<endl;
        cout<<"NAME="<<name<<endl;
        cout<<"gender(m/f)="<<gender<<endl;
        comp();
    }
    void comp()
    {
        if(pin==768004 && gender=='f')
        cout<<"\nELIGIBLE";
    else
        cout<<"\nSORRY NO ONE THIS TIME";
    }
};
int main()
{
    student s;
    s.input1();
    cout<<"\n\nCRITERIA FOR SCHOLARSHIP:";
    cout<<"\n(1) SHE MUST BE FEMALE";
    cout<<"\n(2) SHE MUST BELONG TO AN AREA HAVING PIN CODE-768004";
    getch();
   cout<<"\nCANDIDATES ARE:";
   s.output1();
}
