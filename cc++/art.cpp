#include<iostream>
using namespace std;
int main()
{
	int i,j,c=1,k=1,n;

	cout<<"Enter the size of  array\n";
	cin>>n;
		float a[n][n];float al[n],be[n],d[n],x[n];
    cout<<"enter the coeffiecient matrix\n";
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cin>>a[i][j];
    		
		}
	}
	    cout<<"enter the  matrix d\n";
	for(j=0;j<n;j++)
    	{
    		cin>>d[j];
    		
		}
	al[0]=a[0][0];
	for(i=1;i<n;i++)
	{
		
		 al[i]=a[i][c]-(a[i][c-1]*a[i-1][c])/al[i-1];
		 c++;
	}
	be[0]=d[0]/a[0][0];
	
	for(i=1;i<n;i++)
	{
		
		 be[i]=(d[i]-a[i][k-1]*be[i-1])/al[i];
		 k++;
	}
	x[n-1]=be[n-1];
	int m=n-1;
	for(i=n-2;i>=0;i--)
	{
		x[i]=be[i]-(a[i][m]*x[i+1])/al[i];
		m--;
	}
	cout<<"Solution is\n";
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<",";
	}
}

