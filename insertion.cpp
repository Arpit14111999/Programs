#include<iostream>
using namespace std;
#define m 70
  int a[m];   int n;
  void insertionsort()
  { 
      int i,j,tem;
      for( i=1;i<n;i++)
      {
         tem=a[i];
          j=i-1;
          while(j>=0&&a[j]>tem)
          {
              a[j+1]=a[j];
              j--;

          }
          a[j+1]=tem;
      }
  }
  void display()
  {
       for(int i=0;i<n;i++)
      {
          cout<<a[i]<<"   ";
      }  
  }
int main()
 {  
     cout<<"Enter the no of elements of arryay\n";
 cin>>n;
    cout<<"Enter the elements of arrya\n";
      for(int t=0;t<n;t++)
      {
          cin>>a[t];
      }
         cout<<" array before sorting\n";
      display();
      insertionsort();
   
      cout<<"\n";
      cout<<"Aftr sorting\n";
      display();
 }
