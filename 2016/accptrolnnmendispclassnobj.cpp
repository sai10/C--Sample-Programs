#include<iostream>
using namespace std;
#include<stdio.h>
class student
{
private:
    int roll;
    char name[30];
public:
    void inou()
   {
    cout<<"Enter roll number:";
    cin>>roll;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Roll Number is:"<<roll<<endl;
    cout<<"Name is :"<<name<<endl;
   }
};
int main()
{
    student s;
    s.inou();
}
