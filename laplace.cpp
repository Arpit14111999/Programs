//Admission no 21MS0025    Name:Arpit Srivastava  (Solution of Laplace equation)
#include<iostream>
using namespace std;
int main()
{int n,itr;
cout<<"Enter the No. Of rows/column"<<endl;
cin>>n;
cout<<"Enter the  no. of iterations"<<endl;
cin>>itr;
float u[n+1][n+1];
cout<<"Enter the values for u(i,0)"<<endl;
for(int i=0;i<=n;i++)
{

cin>>u[i][0];
}
cout<<"Enter the values for u(i,n)"<<endl;
for(int i=0;i<=n;i++)
{

cin>>u[i][n];
}
cout<<"Enter the values for u(0,i)"<<endl;
for(int i=1;i<n;i++)
{
cin>>u[0][i];
}
cout<<"Enter the values for u(n,i)"<<endl;
for(int i=1;i<n;i++)
{
cin>>u[n][i];
}
for(int i=1;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
        u[i][j]=0;
    }
}
u[n/2][n/2]=(u[0][0]+u[0][n]+u[n][0]+u[n][n])/4; //diagonal formula
if(n%2==0)
{
for(int i=1;i<(n+1)/2;i++)
{
    u[n/2-i][n/2+i]=(u[n/2-i-1][n/2+i+1]+u[n/2-i+1][n/2+i+1]+u[n/2-i-1][n/2+i-1]+u[n/2-i+1][n/2+i-1])/4;
    u[n/2+i][n/2+i]=(u[n/2+i-1][n/2+i+1]+u[n/2+i+1][n/2+i+1]+u[n/2+i-1][n/2+i-1]+u[n/2+i+1][n/2+i-1])/4;     //Diagonal formula
    u[n/2-i][n/2-i]=(u[n/2-i-1][n/2-i+1]+u[n/2-i+1][n/2-i+1]+u[n/2-i-1][n/2-i-1]+u[n/2-i+1][n/2-i-1])/4;
    u[n/2+i][n/2-i]=(u[n/2+i-1][n/2-i+1]+u[n/2+i+1][n/2-i+1]+u[n/2+i-1][n/2-i-1]+u[n/2+i+1][n/2-i-1])/4;
}
for(int i=1;i<(n+1)/2;i++)
{
    u[n/2][n/2+i]=(u[n/2][n/2+i-1]+u[n/2][n/2+i+1]+u[n/2-1][n/2+i]+u[n/2+1][n/2+i])/4;
    u[n/2][n/2-i]=(u[n/2][n/2-i-1]+u[n/2][n/2-i+1]+u[n/2-1][n/2-i]+u[n/2+1][n/2-i])/4; //Standard   formula
    u[n/2-i][n/2]=(u[n/2-i][n/2-1]+u[n/2-i][n/2+1]+u[n/2-i-1][n/2]+u[n/2-i+1][n/2])/4;
    u[n/2+i][n/2]=(u[n/2+i][n/2-1]+u[n/2+i][n/2+1]+u[n/2+i-1][n/2]+u[n/2+i+1][n/2])/4;
    
}
 for(int k=1;k<=itr;k++)
    {
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
                u[i][j]=(u[i-1][j]+u[i+1][j]+u[i][j-1]+u[i][j+1])/4; //standard formula
        }
    }
}
else{
     for(int k=1;k<=itr;k++)
    {
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
                u[i][j]=(u[i-1][j]+u[i+1][j]+u[i][j-1]+u[i][j+1])/4; //standard formula
        }
    }
}
cout<<" VALUES ARE-->"<<endl;
for(int i=1;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
      cout<<"u["<<j<<"]"<<"["<<i<<"] = "<<u[j][i]<<endl;
    }
}

return 0;
}