#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=new node();
node *t;    node *te;int k=0;  node *pt;
void insertatend()
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
void insertatbeg()
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
  t->data=y;
  t->next=head;
  head=t;
    }
    
}
void insertatmiddle()
{
    int j,p,i=1;
    cout<<"Enter the position"<<"\n";
    cin>>p;
 cout<<"Enter the element"<<"\n";
 cin>>j;
 t=new node();
 t->data=j;

  pt=head;
 while (i!=p-1)
 {
  pt=pt->next;
  i++;
 }
  t->next=pt->next;
  pt->next=t;

    }
    void deletefromend()
{
    node *k;
  pt=head;
 while ((pt->next)!=NULL)
 { 
     k=pt;
  pt=pt->next;
   
 }
  k->next=NULL;

    }
    void deleteinmiddle()
{
    int j,p,i=1;
    cout<<"Enter the position"<<"\n";
    cin>>p;
 
  pt=head;
 while (i!=p-1)
 {
  pt=pt->next;
  i++;
 }
 t=pt->next;
 pt->next=t->next;
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
           deleteinmiddle();
           break;
        case 2:
        print();
         break;
         case 3:
           cout<<"end";
           break;
           case 4:
              insertatend();
              break;
         default:
                 cout<<"\n";
                 break;
    }
}
}
