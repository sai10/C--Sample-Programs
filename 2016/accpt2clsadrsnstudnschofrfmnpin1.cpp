#include<conio.h>
#include<iostream>
using namespace std;
class address
{
   long int pin;
    char city[30],state[30];
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
    long int getpin()
    {
        return pin;
    }
};
class student
{
    address a;
    int roll;
    char name[30],gender;
public:
    void input()
    {
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"Enter name:";
        cin.get();
        cin.getline(name,30);
        cout<<"Enter your gender:";
        cin>>gender;
        a.input();
    }
    void output()
    {
        cout<<"ROLL="<<roll<<endl;
        cout<<"NAME="<<name<<endl;
        cout<<"gender(m/f)="<<gender<<endl;
        comp();
    }
    void comp()
    {
        if(a.getpin()==768004 && gender=='f')
        cout<<"\nELIGIBLE";
    else
        cout<<"\nSORRY NO ONE THIS TIME";
    }
};
int main()
{
    student s;
    s.input();
    cout<<"\n\nCRITERIA FOR SCHOLARSHIP:";
    cout<<"\n(1) SHE MUST BE FEMALE";
    cout<<"\n(2) SHE MUST BELONG TO AN AREA HAVING PIN CODE-768004";
    getch();
   cout<<"\n\nCANDIDATES ARE:";
   s.output();
}

