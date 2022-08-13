#include<iostream>
using namespace std;
int a[100]; int i,j,n,t;
void  sortbubb()
{
          for(i=0;i<n;i++)
          {
              for(j=0;j<(n-i-1);j++)
              {
                  if(a[j]>a[j+1])
                  {
                      t=a[j];
                      a[j]=a[j+1];
                      a[j+1]=t;
                  }
              }
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
      sortbubb();
      cout<<"\n";
      cout<<"Array afer sorting\n";
       display();

}
