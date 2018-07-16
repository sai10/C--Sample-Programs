#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[30],ch;
    ifstream fin("accptrolnnmeintofile.txt");
    while(!fin.eof())
    {
       if(fin.eof())
          break;
        fin>>roll;
        fin>>name;
        cout<<"ROLL NUMBER="<<roll<<endl;
        cout<<"NAME="<<name<<endl;
    }
    fin.close();
}

