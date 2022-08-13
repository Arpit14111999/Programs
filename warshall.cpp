#include<iostream>
using namespace std;
int ors(int a,int b)
{
	if(a==0&&b==0)
	  return(0);
	else
	 return 1;
}
int ands(int a,int b)
{
	if(a==1&&b==1)
	  return(1);
	else
	 return 0;
}
int main()
{

    int m,i,j,k=1,y;
    cout<<"Enter the no of nodes \n";
    cin>>m;
    int P[m][m];
    cout<<"Enetr the adjacency matrix\n";
      for(i=0;i<m;i++)
      {
        
          for(j=0;j<m;j++)
          {
             cin>>P[i][j];
          }
      }
      while(k<m)
      {	
      for(i=0;i<m;i++)
      {
           for(j=0;j<m;j++)
           {
		   
            y=ands(P[i][k],P[k][j]);
            P[i][j]=ors(y,P[i][j]);
        }
   
        }
      
      


             k++;
}
  for(i=0;i<m;i++)
      {
        
          for(j=0;j<m;j++)
          {
             cout<<P[i][j];
          }
          cout<<"\n";
}
}





