#include<iostream>
using namespace std;
#include<stdio.h>
class student
{
private:
    int roll;
    float sub[3],TM,p;
    char name[30];
public:
void input();
void output();
void calculate();
};
void student :: input()
   {
       int i;
    cout<<"Enter roll number:";
    cin>>roll;
    fflush(stdin);
    cout<<"Enter name:";
    gets(name);
    for(i=0;i<3;i++)
        {
    cout<<"sub"<<i+1<<"-";
    cin>>sub[i];
        }
   }
   void student :: output()
   {
       int i;
    calculate();
    cout<<"Roll Number is:"<<roll<<endl;
    cout<<"Name is :"<<name<<endl;
    for(i=0;i<3;i++)
    cout<<"sub"<<i+1<<"-"<<sub[i]<<endl;;
    cout<<"Total Marks=="<<TM<<endl;
    cout<<"PERCENTAGE=="<<p<<endl;
   }
   void student :: calculate()
   {TM=0;
   int i;
   for(i=0;i<3;i++)
       TM=TM+sub[i];
       p=TM/3;
   }
int main()
{
    student s;
    s.input();
    s.output();
}


