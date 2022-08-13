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
  node *head3=new node();
 node *save,*temp,*ptr,*save1,*ptr1,*save3,*head2,*ptr2,*loc,*locp,*save4;int m=0;int n=0,t=0,d=0;
 void poly1(int c,int e)
 { 
     if(m==0)
     {
         head->exp=e;
         head->cof=c;
         head->next=NULL;
         save=head;
         m++;
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
    t++;//to count the number of terms
 }
 void poly2(int c,int e)
 {
     
     if(n==0)
     {
         head1->exp=e;
         head1->cof=c;
         head1->next=NULL;
         save1=head1;
         n++;
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
    d++;
 }

 void multiply()
 { 
    ptr=head;ptr1=head1;n=0;
  while(ptr!=NULL)
  {
        while(ptr1!=NULL)
        {
           
        if(n==0)
        {
            head2=new node();
           head2->exp=ptr->exp+ptr1->exp;
           head2->cof=(ptr->cof)*(ptr1->cof);
           head2->next=NULL;
            save3=head2;
            n++;
        }
        else
        {
            temp=new node();
           temp->exp=ptr->exp+ptr1->exp;
           temp->cof=(ptr->cof)*(ptr1->cof);
           temp->next=NULL;
            save3->next=temp;
            save3=temp;
        }
          ptr1=ptr1->next;
        }
        ptr1=head1;
        ptr=ptr->next;
    }
    ptr=head2;
   
    while(ptr!=NULL)
    {
         loc=ptr->next;
         locp=ptr;
         while(loc!=NULL)
         {
             if(loc->exp==ptr->exp)
             {
                 ptr->cof=ptr->cof+loc->cof;
                 locp->next=loc->next;
                 loc=loc->next;

             }
             else
             {
                loc=loc->next;
                locp=locp->next;
             }
         }
         ptr=ptr->next;

    }
    
 }
 void addition()
 {
     ptr=head;n=0;
     ptr1=head1;
     while(ptr!=NULL&&ptr1!=NULL)
     {  
     

         if(ptr->exp>ptr1->exp)
         {
             temp=new node();
             temp->exp=ptr->exp;
             temp->cof=ptr->cof;
             temp->next=NULL;
             ptr=ptr->next;
            if(n==0)
         {
             head3=temp;
             save4=head3;
             n++;
         }
          if(n!=0)
         {
             save4->next=temp;
             save4=temp;
            
         }
         }
        if(ptr->exp<ptr1->exp)
         {
             temp=new node();
             temp->exp=ptr1->exp;
             temp->cof=ptr1->cof;
             temp->next=NULL;
             ptr1=ptr1->next;
        
         }
          if(ptr->exp=ptr1->exp)
         {
             temp=new node();
             temp->exp=ptr->exp;
             temp->cof=ptr->cof+ptr1->cof;
             temp->next=NULL;
             ptr=ptr->next;
             ptr1=ptr1->next;
       
         }
          if(n==0)
         {
             head3=temp;
             save4=head3;n++;
         }
         if(n!=0)
         {
             save4->next=temp;
             save4=temp;
            
         }

     }
     while(ptr!=NULL)
     {
          temp=new node();
             temp->exp=ptr->exp;
             temp->cof=ptr->cof;
             temp->next=NULL;
             ptr=ptr->next;
     }
  while(ptr1!=NULL)
     {
          temp=new node();
             temp->exp=ptr1->exp;
             temp->cof=ptr1->cof;
             temp->next=NULL;
             ptr1=ptr1->next;
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
             if((ptr->exp)==0)
             cout<<ptr->cof;
            else
            cout<<ptr->cof<<"x"<<ptr->exp;
     }
     if((ptr->cof>0)&&ptr!=head)
     {
       if((ptr->exp)==0)
             cout<<"+"<<ptr->cof;
            else
            cout<<"+"<<ptr->cof<<"x"<<ptr->exp;
     }
     ptr=ptr->next;
     }
     cout<<"The first poly is "<<endl;
     ptr=head1;
     while(ptr!=NULL)
     {
       
         if(ptr==head1||(ptr->cof)<0)
         {
             if((ptr->exp)==0)
             cout<<ptr->cof;
            else
            cout<<ptr->cof<<"x"<<ptr->exp;
     }
     if((ptr->cof>0)&&ptr!=head1)
     {
       if((ptr->exp)==0)
             cout<<"+"<<ptr->cof;
            else
            cout<<"+"<<ptr->cof<<"x"<<ptr->exp;
     }
     ptr=ptr->next;
     }
     cout<<"Sum is\n";
      ptr=head2;
     while(ptr!=NULL)
     {
       
         if(ptr==head2||(ptr->cof)<0)
         {   
             if((ptr->exp)==0)
             cout<<ptr->cof;
            else
            cout<<ptr->cof<<"x"<<ptr->exp;
     }
     if((ptr->cof>0)&&ptr!=head2)
     {
       if((ptr->exp)==0)
             cout<<"+"<<ptr->cof;
            else
            cout<<"+"<<ptr->cof<<"x"<<ptr->exp;
     }
     ptr=ptr->next;
     }
      ptr=head2;
     while(ptr!=NULL)
     {
       
         if(ptr==head3||(ptr->cof)<0)
         {   
             if((ptr->exp)==0)
             cout<<ptr->cof;
            else
            cout<<ptr->cof<<"x"<<ptr->exp;
     }
     if((ptr->cof>0)&&ptr!=head3)
     {
       if((ptr->exp)==0)
             cout<<"+"<<ptr->cof;
            else
            cout<<"+"<<ptr->cof<<"x"<<ptr->exp;
     }
     ptr=ptr->next;
     }
 }
int main()
{   
    int i=1,j=1,k=1,expo,coef;
 
    cout<<"Enter the values for"<<i<<"th polynomial\n";
     while(j==1)
     {
    cout<<"Enter the coefficient of  "<<k<<"th term"<<endl;
    cin>>coef;
    cout<<"Enter the exponent of "<<k<<"th"<<"term"<<endl;
    cin>>expo;
  
    poly1(coef,expo);
    
    
    
        
    
    cout<<"Enter 1 to continue and 0 to end"<<endl;
    cin>>j;
    k++;

     }
   
    
    cout<<"Enter the values for"<<i<<"th polynomial\n";
    j=1,k=1;
    while(j==1)
     {
    cout<<"Enter the coefficient of  "<<k<<"th term"<<endl;
    cin>>coef;
    cout<<"Enter the exponent of "<<k<<"th"<<"term"<<endl;
    cin>>expo;
    
    
    
        poly2(coef,expo);
    
    cout<<"Enter 1 to continue and 0 to end"<<endl;
    cin>>j;
    k++;

     }
    
   addition();
   multiply();
   print();


}