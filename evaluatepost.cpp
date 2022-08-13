#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int sta[90],top=-1;
 void push(int a)
 {
     sta[++top]=a;
 }
 int pop()
 {
     return(sta[top--]);
 }
int main()
{   
    string str;char ch;int i,l,k,y,m;
    cout<<"Enter a postfix expression\n";
     cin>>str;
     l=str.length();
     for(i=0;i<l;i++)
     {
         ch=str.at(i);
         if(isalnum(ch))
          push(ch-'0');
        else if(ch=='+')
        {
            y=pop();
            k=pop();
            push(y+k);
        }
           else if(ch=='-')
        {
            y=pop();
            k=pop();
            push(k-y);
        }
           else if(ch=='*')
        {
            y=pop();
            k=pop();
            push(y*k);
        }
           else if(ch=='/')
        {
            y=pop();
            k=pop();
            push(k/y);
        }
        else
        {
             y=pop();
            k=pop();
            m=(int)pow(k,y);
            push(m);
        }
         
     }
     cout<<"The answer is:  "<<pop();
}