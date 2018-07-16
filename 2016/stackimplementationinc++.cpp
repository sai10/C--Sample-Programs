#include<iostream>
#include<stdlib.h>
using namespace std;
class  stack
{
    int top;
    int siz;
    int a[100];
public:
    void input()
    {
        top=-1;
       cout<<"Enter the size of stack:";
       cin>>siz;
    }
    void menu()
    {
      int x;
      char ch;
        do
        {
            cout<<"STACK IMPLEMENTATIONS"<<endl;
            cout<<"1-push"<<endl;
            cout<<"2-pop"<<endl;
            cout<<"3-display"<<endl;
            cout<<"4-EXIT"<<endl;
            cout<<"ENTER YOUR CHOICE--"<<endl;
            cin>>x;
            if(x==1)
                push();
            else if(x==2)
                pop();
            else if(x==3)
                display();
            else
                exit(0);
            cout<<"\n\n"<<"DO WANT TO CONTINUE:";
            cin>>ch;
        }while(ch=='y');
    }
   void push()
   {
       int n;
       cout<<"Enter the number to be pushed:";
       cin>>n;
       if(top==-1)
          top=0;
       if(top>=siz)
         cout<<"STACK OVERFLOW";
       else
           {
               a[top]=n;
               top++;
           }
   }
   void pop()
   {
       if(top==0)
        cout<<"STACK UNDERFLOW";
       else
        top--;

   }
   void display()
   {
       if(top==-1)
        cout<<"NO ELEMENTS IN THE STACK";
       else
       {
           for(int i=0;i<top;i++)
            cout<<" "<<a[i];
       }
   }
};

int main()
{
    stack s;
    s.input();
    s.menu();
}

