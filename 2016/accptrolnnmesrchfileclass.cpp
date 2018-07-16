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
   int getroll()
   {
       return roll;
   }
};
int main()
{
    student s;
    char ch;
    int r,temp=0;
    ifstream fin("accptrolnnmeintofileclass.txt");
    cout<<"\nEnter roll number to be searched:\n";
    cin>>r;
    while(!fin.eof())
    {
        fin.read((char*)&s,sizeof(s));
        if(fin.eof())
            break;
        if(r==s.getroll())
        {
         cout<<"\nFOUND\n:";
            s.output();
            temp=1;
        }
    }
    if(temp==0)
        cout<<"\nNOT FOUND";
    fin.close();
}


