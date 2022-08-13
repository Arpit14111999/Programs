#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=new node();
node *te;
void insert(int y)
{
  te= new node();
  head->next=te;
  te->data=y;
  te->next=NULL;
  head=te;
}
void print()
{
   node *ptr;
     ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"---->";
        ptr=ptr->next;
    }
}

int main()
{  
    int n,x;
    cout<<"Enter the number of elements of  list"<<endl;
    cin>>n;
    cout<<"Enter the element";
    cin>>x;
   node *t;
   t=head;
    head->data=x;
    head->next=NULL;
    for(int i=1;i<n;i++)
    { 
        cin>>x;
        insert(x);
      
    }
    head=t;
      print();
}