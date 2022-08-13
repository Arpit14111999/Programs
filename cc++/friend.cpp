#include<iostream>
using namespace std;
class arpit
{
    int x,y;
    public:
    void get(int a,int b);
    friend int sum(arpit v,arpit bi);
};
void arpit ::get(int a,int b)
{
    x=a;
    y=b;
}
int sum(arpit v,arpit bi)
{
   int t=v.x+v.y;
   return t;

}
int main()
{
    arpit sd,yd;
    sd.get(34,23);
      yd.get(14,93);
    int u=sum(sd,yd);
    cout<<u;
}