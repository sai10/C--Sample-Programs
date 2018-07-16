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
    ofstream fout("stud.txt");
    cout<<"\nEnter roll number to be modified:\n";
    cin>>r;
    while(!fin.eof())
    {
        fin.read((char*)&s,sizeof(s));
        if(fin.eof())
            break;
        if(r==s.getroll())
            {
                temp=1;
                s.input();
                fout.write((char*)&s,sizeof(s));
            }
        else
            fout.write((char*)&s,sizeof(s));
    }
    if(temp==0)
        cout<<"\nNOT FOUND";
    else
        cout<<"\nMODIFIED SUCCESSFULLY";
    fin.close();
    fout.close();
    remove("accptrolnnmeintofileclass.txt");
    rename("stud.txt","accptrolnnmeintofileclass.txt");
}
