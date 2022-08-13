#include<iostream>
using namespace std;

int ackerman(int m,int n)
{
    if(m==0)
     return(n+1);
     else if(m!=0&&n==0)
       return ackerman(m-1,1);
     else
      return ackerman(m-1,ackerman(m,n-1)) ;
}
int main()
{
    int m ,n;
    cout<<"Enter the values of m and n\n";
    cin>>m>>n;
    int p=ackerman(m,n);
    cout<<p;
}