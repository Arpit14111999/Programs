#include<iostream>
using namespace std;
int a[100]; int i,j,n,item;;
void linesear(int item)
{ 
    int k=0;
          for(i=0;i<n;i++)
          {
                  if(a[i]==item)
                  {
                      k=1;
                      break;
                      
                  }
                  
          }
          if(k==1)
            cout<<"Search Succesful\n"<<"item at index: "<<i<<"\n";
          else 
          cout<<"Search unsuccesful\n";
            
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
       linesear(item);

}