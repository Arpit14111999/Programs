#include<iostream>
using namespace std;
# define n 100
int STACK[n];int top=-1;  int adj[100][100],visit[100];
void push(int k)
{
   if(top==n)
   cout<<"OVERFLOW";
   else
      STACK[++top]=k;
    
}
int pop()
{
   if(top==-1)
   {
      
       return 0;
   }
   else{
       return(STACK[top--]);
   }
}
   void dfss(int r,int s)
   { 
       int i;
       for(i=0;i<s;i++)
       {
         if(visit[i]==0&&adj[r][i]==1)
           {
               push(i);
               cout<<i;
               visit[i]=1;
               dfss(pop(),s);
           }

   }
   }


    int main()
{
    int m,i,j,u,v; char l;  
    cout<<"Enter the no of nodes \n";
    cin>>m;
  
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
       cin>>u;
       cout<<u;
       push(u);
       visit[u]=1;
      dfss(u,m);
}
       