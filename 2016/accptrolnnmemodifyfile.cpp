#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll,r,temp=0;
    char name[30],ch;
    ifstream fin("accptrolnnmeintofile.txt");
    ofstream fout("stud.txt");
    cout<<"Enter roll number to be modified:";
    cin>>r;
    while(!fin.eof())
    {
        fin>>roll;
        fin>>name;
       if(fin.eof())
          break;
       else if(r==roll)
          {
              temp=1;
              cout<<"Enter new roll number:";
              cin>>roll;
              cout<<"Enter new name:";
              cin>>name;
              fout<<roll<<endl;
              fout<<name<<endl;
          }
       else
        {
              fout<<roll<<endl;
              fout<<name<<endl;
        }
    }
    if(temp==0)
        cout<<"\nNOT FOUND";
    else
        cout<<"\nmodified successfully\n";
    fin.close();
    fout.close();
    remove("accptrolnnmeintofile.txt");
    rename("stud.txt","accptrolnnmeintofile.txt");
}


