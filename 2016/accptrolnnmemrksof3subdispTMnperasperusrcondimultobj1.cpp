#include<iostream>
using namespace std;
class student
{
    int roll;static int k;
    float sub[3],TM,p;
    char name[30];
public:
    void input();
    void calculate();
    void output();
    void display(int m);
static void result()
{
    if(k==0)
        cout<<"No one";
}

};int student:: k=0;
inline void student :: input()
{
    int i;
    cout<<"Enter Roll number:";
    cin>>roll;
    cin.get();
    cout<<"Enter Name:";
    cin.getline(name,30);
    for(i=0;i<3;i++)
    {
        cout<<"\nSUB"<<i+1<<"=";
        cin>>sub[i];
    }
}
inline void student :: output()
{
    int i;
    calculate();
    cout<<"Roll="<<roll<<endl;
    cout<<"Name="<<name<<endl;
    for(i=0;i<3;i++)
        cout<<"SUB"<<i+1<<"="<<sub[i]<<endl;
    cout<<"TOTAL MARKS="<<TM<<endl;
    cout<<"PERCENTAGE="<<p<<endl;
}
inline void student :: calculate()
{
    int i;
    TM=0;
    for(i=0;i<3;i++)
        TM=TM+sub[i];
    p=TM/3;
}
inline void student::display(int m)
{
        output();
    if(p>m)
    {
        cout<<"\n\nWINNER IS-\n\n";
        output();
        k++;
    }
}

int main()
{
    int k=0,m,i;
    student s[5];
    for(i=0;i<5;i++)
        s[i].input();
    cout<<"Enter the minimum percentage Criteria:";
    cin>>m;
    for(i=0;i<5;i++)
    s[i].display(m);
    student::result();

}

