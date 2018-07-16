#include<stdio.h>
#include<iostream>
using namespace std;
struct student
{
    int roll;
    char name[30];
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
    cout<<"Enter the name of 5 students:";
        gets(s[i].name);
    cout<<"Enter the roll number of 5 students:";
        cin>>s[i].roll;
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        cout<<"\n\nNames are:\n\n"<<s[i].name;
        cout<<"\n\nRoll numbers are:"<<s[i].roll;
        fflush(stdin);
    }
}
