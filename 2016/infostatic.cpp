#include<iostream>
using namespace std;
class info
{
    int roll;
    char name[30];
    static int k;
public:
    void input()
    {
        cout<<"Enter roll number:";
        cin>>roll;
        cin.get();
        cout<<"enter name:";
        cin.getline(name,30);
    }
    void output()
    {
        cout<<"roll number:"<<roll;
        cout<<"\nname:"<<name<<endl;
    }
    void  count()
    {
        cout<<"student"<<k<<endl<<endl;
        k++;
    }
};
int info::k=1;

int main()
{
    info s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].count();
        s[i].input();
    }
    for(i=0;i<5;i++)
    {
        s[i].count();
        s[i].output();
    }
}
