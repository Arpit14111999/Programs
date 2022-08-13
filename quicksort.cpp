#include<iostream>
using namespace std;
#define m 70
  int a[m];     int i,n,t;
void quicksort(int lb,int ub)
  {
            int start=lb,end=ub;          int pivot=lb;
      if(lb<ub)
      {


      while(start<end)
      {
          while(a[start]<=a[pivot]&&start<=ub)
           start++;
            while(a[end]>a[pivot]&&end>=lb)
             end--;
             if(start<end)
              {
                  t=a[start];
                  a[start]=a[end];
                  a[end]=t;
              }
      }
       
                  t=a[end];
                  a[end]=a[pivot];
                  a[pivot]=t;
    
      quicksort(lb,end-1);
      quicksort(end+1,ub );

  }
  }
  void display()
  {
       for(int i=0;i<n;i++)
      {
          cout<<a[i]<<"  ";
      }  
  }
 int main()
 {  
     cout<<"Enter the no of elements of arryay\n";
 cin>>n;
    cout<<"Enter the elements of arry\n";
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      cout<<"array before sorting\n";
      display();
    quicksort(0,n-1);
    cout<<"\n";
    cout<<"Array after sorting\n";
    display();
 }
