// Admission No. 21MS0025   Name: Arpit  Srivastava
#include<iostream>
#include<math.h>
using namespace std;
double fuc(double x,double y)
{
	return(6*x+y);
}
int main()
{    
double a,b,k[4],h,j;int n,p=0,i;
	cout<<"Enter the initial value of x\n";
	cin>>a;
	cout<<"Enter the initial value of y\n";
	cin>>b;
	cout<<"Enter the step size\n";
	cin>>h;
     cout<<"Enter the value of x at which y is to be caluclated\n";
     cin>>j;
	n=(j-a)/h;
	double y[n];
	
	while(p<n)
	{
	k[0]=h*fuc(a,b);
   
	cout<<"k1\t"<<k[0]<<"\n";
   for( i=1;i<=3;i++)
   {
   	 
     if(i<3)
     {
     	k[i]=h*fuc((a+h/2),(b+k[i-1]/2));
     	
	 }
	 else
	   k[i]=h*fuc((a+h),(b+k[i-1]));
	   cout<<"k"<<i+1<<"\t"<<k[i]<<"\n ";
   }
      double m=(k[0]+2*(k[1]+k[2])+k[3])/6;
     
	y[p]=b+m;
	a=a+h;
	b=b+m;

cout<<"The value is -:"<<y[p]<<"\n";
p++;
  }
  cout<<"the approximated reuired value is -:   "<<y[n-1]<<"\n";
}
  