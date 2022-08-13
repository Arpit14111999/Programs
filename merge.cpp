#include<iostream>
using namespace std;
#define m 70
  int a[m];int b[m] ;   int t,n;
void merging(int l,int mi,int u)
{
     int i=l,j=mi+1,k=l;
    
       while(i<=mi&&j<=u)
       {
          if(a[i]<=a[j])
          {
              b[k]=a[i];
              i++;
          } 
        else
          {
              b[k]=a[j];
              j++;
          }
          k++;
       }
    
        while(j<=u)
       {
           b[k]=a[j];
        
          j++;
            k++;
       }
     
      
      while(i<=mi)
       {
           b[k]=a[i];
      
          i++;
              k++;
     
      
    }
       for(int s=l;s<=u;s++)
     {
         a[s]=b[s];
     }
   
}
  void mergesort(int lb,int ub)
  {
      int mid;
      if(lb<ub)
      {
          mid=(lb+ub)/2;
          mergesort(lb,mid);
          mergesort(mid+1,ub);
          merging(lb,mid,ub);
      }
  }
  void display()
  {
      for(t=0;t<n;t++)
      {
          cout<<a[t]<<"   ";
      }

  }
    
  
int main()
 {  
     cout<<"Enter the no of elements of arryay\n";
 cin>>n;
    cout<<"Enter the elements of arrya\n";
      for(t=0;t<n;t++)
      {
          cin>>a[t];
      }
      cout<<"Initial array\n";
      display();
      
     mergesort(0,n-1);
    cout<<"\n";
    cout<<"Sorted array\n";
    display();
    
 }