#include<iostream>
using namespace std;
int a[100]; int i,j,n,item;;
void binsear(int item,int lb,int ub)
{  
    int k=0,mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==item)
        {
            k=1;
            break;
        }
        else if(item<a[mid])
             ub=mid-1;
         else
         lb=mid+1;
    }
    if(k==1)
      cout<<"Search succesful\n"<<"Item is at index: "<<i;
      else
       cout<<"Unsuccesful\n";
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
      cout<<"Enter the item to be searched\n";
        cin>>item;
  
      cout<<"Given array is: \n";
       display();
       cout<<"\n";
       binsear(item,0,n-1);

}