#include<iostream>
using namespace std;


int main()
{
    int m,n,si,k=0;int i,j;int arr[100][100];
    cout<<"Enter the no of rows and column\n";
      cin>>m>>n;
      
      cout<<"enter the sparse matrix\n";
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>arr[i][j];
               if(arr[i][j]!=0)
                 si++;
        
       }
       }
       int spa[3][si];
       cout<<"Sparse matrix\n";

             for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               cout<<arr[i][j]<<"    ";
            
        
       } 
       cout<<"\n";
       }

     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(arr[i][j]!=0)
             {
                 spa[0][k]=i;
                 spa[1][k]=j;
                 spa[2][k]=arr[i][j];
                 k++;
             }
         }
     }
     cout<<"compact matrix\n";
         for(i=0;i<3;i++)
       {
           for(j=0;j<si;j++)
           {
               cout<<spa[i][j]<<" ";
            
        
       }
       cout<<" \n";
    
}
}
    


