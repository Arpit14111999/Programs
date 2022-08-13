#include<iostream>

using namespace std;
void tow(int n,char A[6],char B[6],char C[6])
{
    if(n==1)
    {
        cout<<A<<"---->"<<C<<endl;;
        return;
    }
    else
    {
       towhano(n-1,A,C,B);
       cout<<A<<"---->"<<C<<endl;
       towhano(n-1,B,A,C);
       return;  
    }

}
int main()
{ 
    int n;
    cout<<"Enter the number of disk\n";
     cin>>n;
     char a[5]={'B','E','G','\0'};
      char b[5]={'A','U','X','\0'};
       char c[5]={'E','N','D','\0'};
     towhano(n,a,b,c);
}