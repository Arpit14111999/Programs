#include<iostream>
using namespace std;
#define n 100
int arr[n]; int front=-1,rear=-1;
void enq(int k)
{  
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
        arr[rear]=k;
    }
}
 int deq()
{ 
    int it=arr[front];
    if(front==-1)
    {
        cout<<"Stack underflow";
        return -1;
    }
    else
    {
     
        if(front==59)
         front=0;
        else if(front==rear)
        {
         front=-1;rear=-1;
        }
         else 
         front++;

    }
    return(it);
}
int main()
{
    int m,i,j,r,v; char l;  
    cout<<"Enter the no of nodes \n";
    cin>>m;
    int adj[m][m],visit[m];
    cout<<"Enetr the adjacency matrix\n";
      for(i=0;i<m;i++)
      {
          visit[i]=0;
          for(j=0;j<m;j++)
          {
             cin>>adj[i][j];
          }
      }
      cout<<"Enter the root element\n";
       cin>>r;
      
       cout<<r<<" ";
       
       enq(r);
       visit[r]=1;
      while(front!=-1)
      {
         v=deq();
        
         for(i=0;i<m;i++)
         {
             for(j=0;j<m;j++)
             {
                 if(adj[v][j]==1&&visit[j]==0)
                 {
                
                     cout<<j<<" ";
                     visit[j]=1;
                     enq(j);
                 }
             }
         }
      }
}