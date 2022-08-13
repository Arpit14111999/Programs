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
    cout<<"Enter the poistion of the element you want to delete"<<endl;
    cin>>t;
     node *tail=head;
   node *point;
   while((j!=t))
   {    
       point=tail;
       tail=tail->next;
       j++;
   }
   point->next=tail->next;

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
void reverse()
{
    node *ptr=head;
    node *save;
    node *ptr1=head;
  node *loc;
  while(ptr!=NULL)
  {
     if(ptr==ptr1)
      {
          loc=head;
          loc->next=NULL;
          head=head->next;
        
      }
     else{
   save=head;
   head=head->next;
   save->next=temp;
     loc=save;
     }
     ptr=ptr->next;
}
}
int main()
    { 
        int choice;  node *ptoi=new node();
        ptoi->data=23;
        cout<<ptoi->data;
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
              <<"9 for reverse"
              <<"10 to end the program\n";
          cout<<"Enter your choice"<<endl;
          cin>>choice;
       
            switch(choice)
            {
                case 1:
                create();
                 cout<<"---------------------------------\n";
				 cout<<"list\n";
                print();
                 cout<<"---------------------------------\n";
                break;
                case 2:
                insertatbeg();
              
                cout<<"Updated list\n";
                 cout<<"---------------------------------\n";
                print();
                  cout<<"---------------------------------\n";
                break;
                case 3 :
                insertatend();
         
                cout<<"Updated list\n";
                 cout<<"---------------------------------\n";
                print();
                        cout<<"---------------------------------\n";
                break;
                case 4:
                insertinmid();
                
                cout<<"Updated list\n";
                 cout<<"---------------------------------\n";
                print();
                 cout<<"---------------------------------\n";
                break;
                case 5:
                deletefrombeg();
                cout<<"Updated list\n";
                  cout<<"---------------------------------\n";
                print();
                  cout<<"---------------------------------\n";
                break;
                case 6:
                deletefromend();
                cout<<"Updated list\n";
                  cout<<"---------------------------------\n";
                print();
                  cout<<"---------------------------------\n";
                break;
                case 7:
                deletefrommid();
                cout<<"Updated list\n";
                  cout<<"---------------------------------\n";
                print();
                  cout<<"---------------------------------\n";
                break;
                case 8:
                search();
                break;
                case 9:
                reverse();
                  cout<<"---------------------------------\n";
                print();
                  cout<<"---------------------------------\n";
                  break;
                  
                case 10:
                cout<<"End of execcution\n";
                break;
                default:
                	cout<<"wrong choice\n";
                	break;
            }

            }while(choice!=10);
        }

        
