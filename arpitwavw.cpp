#include<iostream>//forward approximation
#include<math.h>
using namespace std;
double f(double x)//initial condition u(x,0)
{
	return(x*x*(5-x));
}
float g(float x )// condition ut(x,0)
{
	 return 0;
}
int main()
{
	double c,h,k,a;int l,i,j;double u[80][80];
	cout<<"Enter the value of c \n";
	  cin>>c;
	 cout<<"Enter the values of step size h and k\n";
	 cin>>h>>k;
	 cout<<"Enter the length of string/rod\n";
	 cin>>l;
	 a=k/h;
	 l=l/h;
	   for(i=0;i<=l;i++)
	   {
	   	u[0][i]=0;
	   	u[l][i]=0;
	   }
	   	 for(i=1;i<l;i++)
	 {
	 	u[i][0]=f(i*h);
	 }
	 for(i=1;i<l;i++)
	 {
	 	u[i][1]=u[i][0]+k*g(i*h);
	 }
	 for(j=1;j<l;j++)
	 {
	 for(i=1;i<l;i++)
	 {
	 	u[i][j+1]=2*(1-a*a*c*c)*u[i][j]+(a*a*c*c*(u[i-1][j]+u[i+1][j]))-u[i][j-1];
	 }
	 }
	 for(i=0;i<=l;i++)
	 {
	 	 for(j=0;j<=l;j++)
	 	 {
	 	 	cout<<"u("<<i<<","<<j<<")"<<" = "<<u[i][j]<<"     ";
		  }
		  cout<<"\n ";
	 }
}
