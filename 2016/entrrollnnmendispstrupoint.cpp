#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct student
{
    int roll;
    char name[30];
};
int main()
{
    student s,*p;
    p=&s;
    cout<<"Enter your Roll number:";
    cin>>s.roll;
    fflush(stdin);
    cout<<"Enter name:";
    gets(s.name);
    cout<<"Roll number is:"<<p->roll<<"\n";
    cout<<"Name is :"<<p->name<<"\n";
getch();
}

