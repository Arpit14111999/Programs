#include<iostream>
using namespace std;
int main()
{ 
        int i,j,k,b=0,c=0,m,n,min,max,p=0,t=0;
         cout<<"Enter size of m*n matrix";
         cin>>m;
         cin>>n;
       int a[m][n];
        cout<<"Enter elements of matrix";
	    for(i=0;i<m;i++)//Entering the elements of matrix 
	    {
	 	
	    for(j=0;j<n;j++)
	      {
	 	    cin>>a[i][j];
	      }
	    }
	 
	        for(i=0;i<m;i++)//loop to find saddle point
	        {
	 	 
	 	        min=a[i][0];max=min;
	 	        for(k=1;k<n;k++)//segment to find maximum and minimun in each row
	 	        {
	 	    	 if(min>a[i][k])
	 	    	 {
				 min=a[i][k];
	 	    	 c=k;
	 	         }
	 	    	 if(max<a[i][k])
	 	    	 {
				  max=a[i][k];
	 	    	  b=k;
	 	         }
				}
			 //segment to compare minelement of row with other elements of column in which that element belong
		        for(k=0;k<m;k++)
	 	         {
	 	          if(min<a[k][c])
	 	    	   {
				      t++;
	 	    	      break;
	 	           }
				 
			     }
			     if(t==0)
			     {
			 	    cout<<"Saddle point"<<min;
			     }
			     //segment to compare minelement of row with other elements of column in which that element belongs
			 	 for(k=0;k<m;k++)
	 	          {
	 	    
	 	    	     if(max>a[k][b])
	 	    	     {
				       p++;
	 	    	       break;
	 	             }
				 
			      }
			 if(p==0)
			 {
			 	cout<<"Saddle point"<<max;
			 }
			 p=0,t=0;
	     }
	 }

