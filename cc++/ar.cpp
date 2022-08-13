#include<iostream>
using namespace std;
class item
{ 
       public:
    int a,b;
 
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
void putdata()
    {
        cout<<a<<endl;
        cout<<b;
        
    }

};
int  main()
{
    item w;
w.getdata(10,3);
w.putdata();
int u=w.a;
cout<<"bn"<<u;

}