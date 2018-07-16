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
    student s;
    cout<<"Enter your Roll number:";
    cin>>s.roll;
    fflush(stdin);
    cout<<"Enter name:";
    gets(s.name);
    cout<<"Roll number is:"<<s.roll<<"\n";
    cout<<"Name is :"<<s.name<<"\n";
getch();
}
