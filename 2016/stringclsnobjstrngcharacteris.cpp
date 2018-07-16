#include<iostream>
#include<string>
using namespace std;
void display(string &str)
{
    cout<<"Size="<<str.size()<<endl;
    cout<<"Length="<<str.length()<<endl;
    cout<<"Capacity="<<str.capacity()<<endl;
    cout<<"Maximum size="<<str.max_size()<<endl;
    cout<<"Empty:"<<(str.empty()?"yes":"no")<<endl<<endl;
}

int main()
{
string str1;
cout<<"INIRIAL STATUS:\n";
display(str1);
cout<<"Enter a string(one word)\n";
cin>>str1;
cout<<"STATUS NOW:\n";;
display(str1);
str1.resize(15);
cout<<"STATUS AFTER RESIZING:\n";
display(str1);
}
