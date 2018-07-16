#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
public:
    void input()
   {
    cout<<"\n\nfEnter roll number:";
    cin>>roll;
    cin.get();
    cout<<"Enter name:";
    cin.getline(name,30);
   }
   void output()
   {
    cout<<"\nRoll Number is:"<<roll<<endl;
    cout<<"Name is :"<<name<<endl;
   }
};
int main()
{
    int i;
    student s[5];
    for(i=0;i<5;i++)
    s[i].input();
    for(i=0;i<5;i++)
    s[i].output();
}

