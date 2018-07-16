 #include<iostream>
using namespace std;
#include<stdio.h>
class student
{
private:
    int roll;
    float sub1,sub2,sub3,TM,p;
    char name[30];
public:
    void input()
   {
    cout<<"Enter roll number:";
    cin>>roll;
    fflush(stdin);
    cout<<"Enter name:";
    gets(name);
    cout<<"Marks of sub1=";
    cin>>sub1;
    cout<<"Marks of sub2=";
    cin>>sub2;
    cout<<"Marks of sub3=";
    cin>>sub3;
   }
   void output()
   {
    calculate();
    cout<<"Roll Number is:"<<roll<<endl;
    cout<<"Name is :"<<name<<endl;
    cout<<"Sub1="<<sub1<<endl;
    cout<<"Sub2="<<sub2<<endl;
    cout<<"sub3="<<sub3<<endl;
    cout<<"Total Marks=="<<TM<<endl;
    cout<<"PERCENTAGE=="<<p<<endl;
   }
   void calculate()
   {
       TM=sub1+sub2+sub3;
       p=TM/3;
   }
};
int main()
{
    student s;
    s.input();
    s.output();
}


