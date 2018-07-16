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
    ifstream fin("accptrolnnmeintofileclass.txt");
    while(!fin.eof())
    {
        fin.read((char*)&s,sizeof(s));
        if(fin.eof())
            break;
        s.output();
    }
    fin.close();
}

