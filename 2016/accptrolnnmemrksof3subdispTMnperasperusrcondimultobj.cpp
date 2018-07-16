#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    int roll;
    float sub[3],TM,p;
    char name[30];
public:
    void input();
    float calculate();
    void output();
    //float getp();
};
/*float student:: getp()
{
	return p;
}*/
void student :: input()
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
void student :: output()
{
    int i;
    //calculate();
    cout<<"Roll="<<roll<<endl;
    cout<<"Name="<<name<<endl;
    for(i=0;i<3;i++)
	cout<<"SUB"<<i+1<<"="<<sub[i]<<endl;
    cout<<"TOTAL MARKS="<<TM<<endl;
    cout<<"PERCENTAGE="<<p<<endl;
}
float student :: calculate()
{
    int i,r;
    TM=0;
    for(i=0;i<3;i++)
	TM=TM+sub[i];
    r=TM/3;
    p=r;
    return r;
}

int main()
{
  //  clrscr();
    int k=0,i;
    float m,q;
    student s[2];
    for(i=0;i<2;i++)
	s[i].input();
    cout<<"Enter the minimum percentage Criteria:";
    cin>>m;
    for(i=0;i<2;i++)
    {
	q=s[i].calculate();
	cout<<q<<endl;
	cout<<m<<endl;
	s[i].output();
	if(q > m)
	{
	    k++;
	    s[i].output();
	}
    }
    if(k==0)
	cout<<"Sorry!NO one in this criteria";
}
