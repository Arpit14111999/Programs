#include<iostream>
using namespace std;
class h
{
    int a,b;
    public:
    void get(int x,int y)
    {
        a=x;b=y;
    }
    friend sum(h m)
    {
        int h ::*pt=&h ::a;
        
        int h ::*pb=&h ::b;
        h *pm=&m;
        int u=m.a+m.b;
        int v=pm->*pt+pm->*pb;
        return u;
        
    }
};
int main()
{
h st;
st.get(20,30);
int s=sum(st);

cout<<s<<endl;

}
