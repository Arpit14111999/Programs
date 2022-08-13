#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;

};
int n=0;
node *head=new node();
node *temp;int i;
 node *save=head;
  node *ptr=head;
  node *tail;
void create()
{
    int n,y;
   cout<<"Enter the number of element "<<endl;
   cin>>n;
    cout<<"Enter the elements "<<endl;
    cin>>y;
   
    head->data=y;
    head->next=NULL;
    head->prev=NULL;
    for(i=1;i<n;i++)
    {
        temp=new node();
        cin>>y;
        temp->data=y;
        temp->next=NULL;
        temp->prev=save;
        save->next=temp;
        save=temp;

    }
    tail=save;

}
void insertatbeg()
{ 
    int m;
     cout<<"Enter the elements "<<endl;
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
   head->prev=temp;
   temp->prev=NULL;
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
   temp->prev=save;
   save=temp;

  }

}
void insertinmid()
{
    int m,t,j=1;
    cout<<"Enter the poistion where you want to insert  element"<<endl;
    cin>>t;
     cout<<"\nEnter the element"<<endl;
    cin>>m;
    node *pt=head;
    while(j!=t-1)
    {
       pt=pt->next;
       j++;
    }

   temp=new node();
   temp->data=m;
   temp->next=pt->next;
   temp->prev=pt;
   pt->next=temp;
   

  }
void deletefrombeg()
{
  head=head->next;
   head->prev=NULL;

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
    cout<<"Enter the poistion of the element you want to delete"<<endl;
    cin>>t;
     node *tail=head;
   node *point;
   node *tempe;
   while((j!=t))
   {    
       point=tail;
       tail=tail->next;
       j++;
   }
   tempe=tail->next;
   point->next=tempe;
   tempe->prev=point;

}
void search()
{ 
    int k=1,item;
    cout<<"Enter the item to be serched"<<endl;
    cin>>item;
    ptr=head;
    while(ptr!=NULL)
    {
        if((ptr->data)==item)
        {
            cout<<"Search Successful"<<"\n"<<"at position"<<k<<endl;
        
        
            break;
        }
        ptr=ptr->next;
        k++;
    }
    if(ptr==NULL)
    {
        cout<<"Search unsuccessful";
    }
    
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
void reverseprint()
{
   ptr=tail;
   while(ptr!=NULL)
   {
   	cout<<ptr->data<<",";
   	ptr=ptr->prev;
   }
}

int main()
    { 
        int choice;
       do
        {
          cout<<"\nEnter your choice\n"
              <<"1 for creating a linked list\n"
              <<" 2 for insert in begging\n"
              <<" 3 for insert at last\n"
              <<" 4 for insert in any middle position\n"
              <<" 5 for delete from begging\n"
              <<" 6 for delete from end\n"
              <<" 7 for delete from any mid position\n"
              <<" 8 for search an element\n"
              <<"9 to end the program\n";
          cout<<"Enter your choice"<<endl;
          cin>>choice;
       
            switch(choice)
            {
                case 1:
                create();
                print();
                break;
                case 2:
                insertatbeg();
                cout<<"Updated list\n";
                print();
                break;
                case 3 :
                insertatend();
                cout<<"Updated list\n";
                print();
                break;
                case 4:
                insertinmid();
                cout<<"Updated list\n";
                print();
                break;
                case 5:
                deletefrombeg();
                cout<<"Updated list\n";
                print();
                break;
                case 6:
                deletefromend();
                cout<<"Updated list\n";
                print();
                break;
                case 7:
                deletefrommid();
                cout<<"Updated list\n";
                print();
                break;
                case 8:
                search();
                break;
                case 9:
                reverseprint();
         
                  break;
                  
                default:
                cout<<"Wrong choice";
                break;
            }

            }while(choice!=10);
        }

        
