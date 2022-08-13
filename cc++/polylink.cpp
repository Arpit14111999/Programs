#include<iostream>
using namespace std;
int main()
{
    int coeff[15],expo[15],link[15];
    coeff[0]=coeff[2]=coeff[5]=5;coeff[7]=-2;
    expo[0]=0;expo[2]=3;expo[5]=1;expo[7]=2;
    link[0]=-1;link[2]=7;link[5]=0;link[7]=5;
    int start=2;
    cout<<"The polynomial is :\n";
    int ptr=start;
    while(ptr!=-1)
    {
      if(ptr=start)
      {
          cout<<coeff[ptr]<<"x"<<expo[ptr];
      }
       if(coeff[ptr]<0 && ptr!=-1)
      {
          cout<<"-"<<coeff[ptr]<<"x"<<expo[ptr];
      }
      if(ptr!=-1)
      {
         if ( coeff[ptr]<0) 
          cout<<"-"<<coeff[ptr]<<"x"<<expo[ptr];
      }
    }
}