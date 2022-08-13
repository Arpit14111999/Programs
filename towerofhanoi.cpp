#include<iostream>
#include<string>
using namespace std;
void towhano(int n,string A,string B,string C)
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
     towhano(n,"BEG","AUX","END");
}