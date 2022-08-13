#include<iostream>
#include<string>
using namespace std;
char stack[300];int top=-1;
int priority(char a)
{
    if(a=='^')
      return 3;
    if(a=='/'||a=='*')
     return 2;
    if(a=='-'||a=='+')
    return 1;
    if(a=='(')
    return 0;

}
void push(char y)
{
    stack[++top]=y;
}
char pop()
{
    return(stack[top--]);
}
int main()
{
    string str;char ch,x;
   cout<<"Enter the infix expression";
   cin>>str;
   str=str+")";
   push('(');
   int l=str.length();
   for(int i=0;i<l;i++)
   {
      ch=str.at(i);
      if(ch!='^'&&ch!='/'&&ch!='*'&&ch!='-'&&ch!='+'&&ch!='('&&ch!=')')
        cout<<ch;
      else if(ch=='(')
        push(ch);
  
         else  if(ch==')')
          {
              while((x=pop())!='(')
               cout<<x;
          }
            else
            {
              while(priority(ch)<=priority(stack[top]))
                cout<<pop();
                push(ch);
            }
              
          }
      }  
          
   