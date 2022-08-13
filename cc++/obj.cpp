#include<iostream>
using namespace std;
class xyz
{
    int numb;int price;
    public:
    void get(int a,int b)
    {
       numb=a;
       price=b;
    }


};
int main()
{
    xyz w; int n,p;
    cout<<"Enter the number of pen"<<endl;
    cin>>n;
    cout<<"Enter the price of one pen"<<endl;
    cin>>p;
    w.get(n,p);
    int u=w.numb;
    int v=w.price;
    cout<<"Number of item"<<u<<"\t"<<"price:"<<v<<endl;
}