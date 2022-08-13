#include<iostream>
using namespace std;
struct node
{
    int exp;
    int cof;
   node *next;
};
 node *head=new node();
 node *head1=new node();
 node *save,*temp,*ptr,*save1;

 void poly2(int c,int e)
 {
     if(head1==NULL)
     {
         head1->exp=e;
         head1->cof=c;
         head1->next=NULL;
         save1=head1;
     }
    else
    {
     temp=new node();
     temp->exp=e;
     temp->cof=c;
     temp->next=NULL;
     save1->next=temp;
     save1=temp;
    }
 }
 void print()
 {
     cout<<"The first poly is "<<endl;
     ptr=head;
     while(ptr!=NULL)
     {
         if(ptr==head||(ptr->cof)<0)
         {
      cout<<ptr->cof<<"x"<<ptr->exp;
     }
     if((ptr->cof>0))
     {
         cout<<"+"<<ptr->cof<<"x"<<ptr->exp;
     }
     ptr=ptr->next;
 }
 }
int main()
{   
    int i=1,j=1,k=1,c,e,expo,coef;
  
    cout<<"Enter the values for"<<i<<"th polynomial\n";
     while(j==1)
     {
    cout<<"Enter the coefficient of  "<<k<<"th term"<<endl;
    cin>>c;
    cout<<"Enter the exponent of "<<k<<"th"<<"term"<<endl;
    cin>
     
     if(head==NULL)
     {
         head->exp=e;
         head->cof=c;
         head->next=NULL;
         save=head;
     }
    else
    {
     temp=new node();
     temp->exp=e;
     temp->cof=c;
     temp->next=NULL;
     save->next=temp;
     save=temp;
    }
    cout<<"Enter 1 to continue and 0 to end"<<endl;
    cin>>j;
    k++;

     }
     print();
    }



