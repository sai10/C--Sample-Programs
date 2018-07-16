#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll,r;
    char name[30],ch;
    ifstream fin("accptrolnnmeintofile.txt");
    cout<<"Enter roll number to be searched:";
    cin>>r;
    while(!fin.eof())
    {
        fin>>roll;
        fin>>name;
       if(fin.eof())
          break;
          if(r==roll)
        {
        cout<<"\n FOUND\n";
        cout<<"ROLL NUMBER="<<roll<<endl;
        cout<<"NAME="<<name<<endl;
        }
    }
    fin.close();
}

