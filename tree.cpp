#include<iostream>
using namespace std;

struct node
{
    char data;
     
     node *le;

};
 node *a=new node();node *ptr; node *i=new node();
node  *tree(node* root)
{
  
    if(root==NULL)
      return root;
      else
    {
        cout<<"Enter the left child of "<<"\n";
        node *left=new node();
         cin>>left->data;
         
         root->le=tree(left);
            return root;
       
    }
   
}
void print()
{
     ptr=i;
    while( ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->le;
    }
}
int main()
{
    int u;
  
    cout<<"Enter the root\n";
     cin>>u;
     a->data=u;
     i=tree(a);
     print();
}