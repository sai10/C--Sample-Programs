#include<iostream>
using namespace std;
int palindrome1()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    while(n!=0)
{

 return n;}
}
int palindrome2()
{
    int c,d,r=0,temp;
    c=palindrome1();
    temp=c;
    while(c!=0)
        {d=c%10;
        r=r*10+d;
        c=c/10;}
    c=temp;
    if(r==c)
        cout<<"It is palindrome";
    else
        cout<<"It is not a palindrome";

}
int main()
{
    palindrome2();

}




