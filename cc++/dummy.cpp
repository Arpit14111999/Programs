#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=new node();
node *t;    node *te;int k=0;
void insert()
{
    int y;
    cout<<"Enter the element"<<"\n";
    cin>>y;
    if(k==0)
    {
        head->data=y;
        head->next=NULL;
        k++;
    }
    else
    {
  t =new node();
  te->next=t;
  t->data=y;
  t->next=NULL;
  te=t;
    }
    
}
void print()
{

   node *ptr;
     ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<",";
        ptr=ptr->next;
    }
    
}

int main()
{  
    int n,x,c=0;
 
       te=head;
       head=NULL;
    while(c!=3) 
    {
    cout<<"Enter your choice"
         <<"1 to insert node at beggining"
         <<"2 to insert node at last"
         <<"3delete a node from begging "
         <<"4delete a node from last "
         <<"5 to display the list"
         <<"6 to end"<<"\n";
         cin>>c;
         cout<<"\n";
  
  
    switch(c)
    {
        case 1:
           insert();
          
           break;
        case 2:
        print();
         break;
         case 3:
           cout<<"end";
           break;
         default:
                 cout<<"\n";
                 break;
    }
}
}