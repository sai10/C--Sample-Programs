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
    int roll;
    char name[30];
    char gender;
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
    }
    void output()
    {
	cout<<"ROLL="<<roll<<endl;
	cout<<"NAME="<<name<<endl;
	cout<<"gender(m/f)="<<gender<<endl;
    }
    char getgender()
    {
	return gender;
    }
};
int main()
{
    address a;
    student s;
    s.input();
    a.input();
   long int p=768004;
    char g='f';
    cout<<"\n\nCRITERIA FOR SCHOLARSHIP:";
    cout<<"\n(1) SHE MUST BE FEMALE";
    cout<<"\n(2) SHE MUST BELONG TO AN AREA HAVING PIN CODE-768004";
    getch();
    if(a.getpin()==p && s.getgender()==g)
    {
	cout<<"\n\nTHE RECIPENT IS:\n\n";
	s.output();
	a.output();
    }
    else
	cout<<"\nSORRY NO ONE THIS TIME";
getch();
return 0;
}
