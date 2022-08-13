#include<iostream>
#include<string>
using namespace std;
//conversion from infix to postfix
char stack[400];int top=0;
int priority(char y)
{
    if(y=='^')
     return 3;
     if(y=='/'||y=='*')
     return 2;
     if(y=='+'||y=='-')
     return 1;
     if(y=='(')
     return 0;
}
 void  push(char l)
{
    top++;
    stack[top]=l;
   

}
char pop()
    {
      char m=stack[top];
      top--;
      return(m);
    }

int main()
{
string exp;char x;int i=0;
cout<<"Enter the expression";
cin>>exp;
exp=exp+")";
int l=exp.length();
char ch;
push('(');
cout<<"\n";
while(i<l)
{
   ch=exp.at(i);
    if(isalnum(ch))
     cout<<ch;
    else if(ch=='(') 
    push(ch);
   else if(ch==')')
    {
        while((x=pop())!='(')
         cout<<x;
    }
    else 
    {
      while( priority(stack[top])>=priority(ch))
        cout<<pop();
       push(ch);
    }
   i++;
}
}