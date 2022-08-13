#include<iostream>
using namespace std;
int a[100]; int i,j,n,t,mini;
void  sortselec()
{
          for(i=0;i<n;i++)
          {
              mini=i;
              for(j=i+1;j<n;j++)
              {
                  if(a[mini]>a[j])
                  {
                      mini=j;
                  }
              }
              
                      t=a[mini];
                      a[mini]=a[i];
                      a[i]=t;
          }
}
void display()
{
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }

}
int main()
{   
    cout<<"Enter the no elements\n";
  cin>>n;
    cout<<"enter the elements of array\n";
      for(i=0;i<n;i++)
      {
            cin>>a[i];
        
      }
      cout<<"array before sorting\n";
       display();
      sortselec();
      cout<<"Array afer sorting\n";
       display();

}