#include<iostream>
#include<fstream>
using namespace std;
class student
{
    int roll;
    char name[30];
public:
   void input()
   {
       cout<<"Roll=";
       cin>>roll;
       cout<<"Name=";
       cin>>name;
   }
   void output()
   {
       cout<<"Roll Number is="<<roll<<endl;
       cout<<"Name is="<<name<<endl;
   }
};
int main()
{
    student s;
    char ch;
    ofstream fout("accptrolnnmeintofileclass.txt");
    do
    {
        s.input();
        fout.write((char*)&s,sizeof(s));
        cout<<"\nDo you want to add another(y/n)?:";
        cin>>ch;
    }while(ch=='y');
    fout.close();
}
