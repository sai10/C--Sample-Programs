#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[30],ch;
    ofstream fout("accptrolnnmeintofile.txt");
    do
    {
        cout<<"Enter roll number:";
        cin>>roll;
        cin.get();
        cout<<"Enter name:";
        cin.getline(name,30);
        fout<<roll<<endl;
        fout<<name<<endl;
        cout<<"Do you want to continue(y/n)?";
        cin>>ch;
    }while(ch=='y');
    fout.close();
}
