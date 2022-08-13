#include<iostream>
#include<cmath>
using namespace std;



int main()
{
  float x,k;int i=1,n;double h=pow(10.0,-8.0);
    cout<<"Enter the number of iteration"<<endl;;
    cin>>n;
    cout<<"Enter the initial approximation"<<endl;
    cin>>x;
   double p=(cos(x+h)-cos(x))/h;
 cout<<"\nThe approximate solution is: "<<p;
}