#include<iostream>
#include<stdlib.h>
using namespace std;
class  stack1
{
    int rear,frnt;
    int siz;
    int a[100];
public:
    void input()
    {
        rear=-1;
        frnt=-1;
       cout<<"Enter the size of queue:";
       cin>>siz;
    }
    void menu()
    {
      int x;
      char ch;
        do
        {
            cout<<"QUEUE IMPLEMENTATIONS"<<endl;
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
            cout<<"\n\n"<<"DO YOU WANT TO CONTINUE:";
            cin>>ch;
        }while(ch=='y');
    }
   void push()
   {
       int n;
       cout<<"Enter the number to be pushed:";
       cin>>n;
       if(frnt==-1 && rear==-1)
        frnt=rear=0;
       if(rear==siz)
        cout<<"QUEUE OVERFLOW";
       else
       {
           a[rear]=n;
           rear++;
       }
   }
   void pop()
   {
       if(rear<frnt || frnt==-1)
        cout<<"QUEUE UNDERFLOW";
       else
       {
          frnt++;
          if(frnt>=rear)
            frnt=rear=-1;
       }
   }
   void display()
   {
       if(frnt==-1 || frnt>rear)
        cout<<"NO ELEMENTS IN THE QUEUE";
       else
       {
           for(int i=frnt;i<rear;i++)
            cout<<" "<<a[i];
       }
   }
};

int main()
{
    stack1 s;
    s.input();
    s.menu();
}
