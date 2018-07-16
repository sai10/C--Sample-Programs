#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll,r,temp=0;
    char name[30],ch;
    ifstream fin("accptrolnnmeintofile.txt");
    ofstream fout("stud.txt");
    cout<<"Enter roll number to be removed:";
    cin>>r;
    while(!fin.eof())
    {
        fin>>roll;
        fin>>name;
       if(fin.eof())
          break;
       else if(r==roll)
          temp=1;
       else
        {
        fout<<"ROLL NUMBER="<<roll<<endl;
        fout<<"NAME="<<name<<endl;
        }
    }
    if(temp==0)
        cout<<"\nNOT FOUND";
    else
        cout<<"\nremoved successfully\n";
    fin.close();
    fout.close();
    remove("accptrolnnmeintofile.txt");
    rename("stud.txt","accptrolnnmeintofile.txt");
}


