#include<iostream>
using namespace std;
#define n 100
int arr[n]; int front=-1,rear=-1;
void enq()
{  int item;
    cout<<"Enter the item to be inserted\n";
    cin>>item;
    if(front==0&&rear==n-1)
    {
        cout<<"Stack overflow";
        return;
    }
    else if(front==rear+1)
    {
         cout<<"Stack overflow";
                 return;
    }
    else
    {
        if(front==-1)
        {
            front=0;rear=0;
           
        }
       else if(rear==n-1)
       {
           rear=0;
          
       }
       else
        rear++;
        arr[rear]=item;
    }
}
 void deq()
{
    if(front==-1)
    {
        cout<<"Stack underflow";
        return;
    }
    else
    {
        int it=arr[front];
        cout<<"the deleted item is\n"<<it<<"\n";
        if(front==59)
         front=0;
        else if(front==rear)
        {
         front=-1;rear=-1;
        }
         else 
         front++;

    }
}
void display()
{  int j;
    cout<<"Updated queue is\n";
    if(front<=rear)
    {
    for(j=front;j<=rear;j++)
    {
        cout<<arr[j];
    }
    }
    else if(front<=n-1)
    {
       for(j=front;j<n;j++)
         cout<<arr[j];
        for(j=0;j<=rear;j++)
         cout<<arr[j]; 
    }
}
int main()
{ 
    int i;
    while(i!=3)
    {
    cout<<"Enter 1 for insertion(enqueue)\n";
    cout<<"Enter 2 for insertion(enqueue)\n";
    cout<<"Enter 3to exit \n";
    cin>>i;
    switch(i)
    {
        case 1:
          enq();
          display();
          cout<<"\n";
          break;
        case 2:
          deq();
          display();
          cout<<"\n";
        case 3:
          break;
          default:
            cout<<"INVALID CHOICE\n";
            break;


    }
}
}