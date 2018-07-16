#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1;
    string s2("NEW");
    string s3("DELHI");
    s1=s2;
    cout<<"Now s1="<<s1<<endl;
    string s4(s1);
    cout<<"Now s4="<<s4<<endl;
    cout<<"Enter a string:"<<endl;
    cin>>s4;
    cout<<"Now s4="<<s4<<endl;
    s1=s2+s3;
    cout<<"s1 finally contains:"<<s1<<endl;
}
