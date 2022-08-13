#include<iostream>
#include<cmath>
using namespace std;

int  main()
{ double x;
  double h;
  h=pow(10.0,-8.0);
  cout<<"Enter the value at which derivative is required for cos";
  cin>>x;
  float y=cos(30);
  double u=(cos(x+h)-cos(x))/h;
  cout<<u<<endl;
   cout<<y;
}