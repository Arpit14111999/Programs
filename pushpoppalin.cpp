#include<iostream>
using namespace std;

int STACK[50];int top=-1,status=0,k=-1;
void push()
{
    int item;
    
 if(top==49)
   cout<<"OVERFLOW";
   else
     {
         cout<<"Enter the item\n";
         cin>>item;
         STACK[++top]=item;
         k++;
         status++;
     }
}
int pop(int STACK[])
{
   if(top==-1)
   {
      
       return 0;
   }
   else{
       return(STACK[top--]);
       status--;
   }
}
   void palin()
   {
   	int t=status;int c=0;
   	for(int i=0;i<t;i++)
	   {
   		if(STACK[i]==pop(STACK))
   		  c++;
	   }
	   top=t-1;
	   if(t==c)
	    cout<<"PAlindrome\n";
	    else
	     cout<<"Not palin\n";
	   
   }
void display()
{
    cout<<"STACK is\n";
  for(int i=0;i<=top;i++)
  {
      cout<<STACK[i]<<"  ";
  }
}
int main()
{
   int y,n=0;
    while(n!=4)
    {
        cout<<"Enter  1 for PUSH operation\n ";
        cout<<"Enter  2 for POP operation\n ";
        cout<<"Enter 3 to check for PALINDROME n\n ";
        cout<<"Enter for 4 to exit\n ";
        cin>>n;
        switch(n)
        {
            case 1:
             push();
             display();
             cout<<"\n";
             break;
             case 2:
             y=pop(STACK);
             cout<<"Popped element is\t"<<y<<"\n";
             display();
               cout<<"\n";
               case 3:
               	   palin();
             
              break;
             case 4:
               break;
            default:
              cout<<"INVALID CHOICE\n";
              break;
             
        }
    }
}
