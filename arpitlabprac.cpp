/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;

};
int n=0;
node *head=new node();
node *temp;int i;
 node *save=head;
  node *ptr=head;
void create()
{
    int m,y;
   cout<<"Enter the number of element "<<endl;
   cin>>m;
    cout<<"Enter the elements "<<endl;
    cin>>y;
   
    head->data=y;
    head->next=NULL;
    for(i=1;i<m;i++)
    {
        temp=new node();
        cin>>y;
        temp->data=y;
        temp->next=NULL;
        save->next=temp;
        save=temp;

    }
   n=1;

}
void insertatbeg()
{ 
    int m;
     cout<<"Enter the element"<<endl;
    cin>>m;
    if(n==0)
    {
        head->data=m;
        head->next=NULL;n++;
    }
  else
  {
   temp=new node();
   temp->data=m;
   temp->next=head;
   head=temp;

  }

}
void insertatend()
{
    int m;
     cout<<"Enter the elements "<<endl;
    cin>>m;
    if(n==0)
    {
        head->data=m;
        head->next=NULL;
        save=head;n++;
    }
  else
  {
   temp=new node();
   temp->data=m;
   temp->next=NULL;
   save->next=temp;
   save=temp;

  }

}
void insertinmid()
{
    int m,t,j=1,l;
    cout<<"Enter the elements between you want to insert"<<endl;
    cin>>t>>l;
     cout<<"\nEnter the element to be inserted"<<endl;
    cin>>m;
    node *pt=head;
    while(pt->data!=t&&pt->data!=l)
    {
       pt=pt->next;
        
    }

   temp=new node();
   temp->data=m;
   temp->next=pt->next;
   pt->next=temp;
   

  }
void deletefrombeg()
{
  head=head->next;
   

  }
void deletefromend()
   {
  
   node *tail=head;
   node *point;
   while((tail->next)!=NULL)
   {    
       point=tail;
       tail=tail->next;
   }
   point->next=NULL;
   }
void deletefrommid()
{
    int m,t,j=1;
    cout<<"Enter the element you want to delete"<<endl;
    cin>>t;
     node *ptr=head;
   node *ptr2;
   while(ptr->data!=t)
   {    
       ptr2=ptr;
       ptr=ptr->next;
       
   }
   ptr2->next=ptr->next;

}

void print()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<",";
        ptr=ptr->next;
    }
}

int main()
    { 
        int choice;
       do
        {
          cout<<"\nEnter your choice\n"
              <<" 1 for creating a linked list\n"
              <<" 2 for insert in begging\n"
              <<" 3 for insert at last\n"
              <<" 4 for insert in any middle position\n"
              <<" 5 for delete from begging\n"
              <<" 6 for delete from end\n"
              <<" 7 for delete from any mid position\n"
              <<" 9 for exit\n";
              
          cout<<"Enter your choice"<<endl;
          cin>>choice;
       
            switch(choice)
            {
                case 1:
                create();
                 cout<<"\n---------------------------------------------------------------\n";
				 cout<<"list\n";
                print();
                 cout<<"\n-----------------------------------------------------------------\n";
                break;
                case 2:
                insertatbeg();
              
                cout<<"Updated list\n";
                 cout<<"\n---------------------------------\n";
                print();
                  cout<<"\n---------------------------------\n";
                break;
                case 3 :
                insertatend();
         
                cout<<"Updated list\n";
                 cout<<"\n--------------------------------------------------------------\n";
                print();
                        cout<<"\n---------------------------------------------------------\n";
                break;
                case 4:
                insertinmid();
                
                cout<<"Updated list\n";
                 cout<<"\n-----------------------------------------------------------------\n";
                print();
                 cout<<"\n-----------------------------------------------------------------\n";
                break;
                case 5:
                deletefrombeg();
                cout<<"Updated list\n";
                  cout<<"\n----------------------------------------------------------------\n";
                print();
                  cout<<"\n-----------------------------------------------------------------\n";
                break;
                case 6:
                deletefromend();
                cout<<"Updated list\n";
                  cout<<"\n------------------------------------------------------------------\n";
                print();
                  cout<<"\n-------------------------------------------------------------------\n";
                break;
                case 7:
                       deletefrommid();
                       cout<<"Updated list\n";
                       cout<<"\n---------------------------------------------------------------\n";
                       print();
                       cout<<"\n---------------------------------------------------------------------\n";
                      break;
                case 8:
                      cout<<"End of execcution\n";
                      break;
                default:
                	cout<<"wrong choice\n";
                	break;
            }

            }while(choice!=8);
        }

        
