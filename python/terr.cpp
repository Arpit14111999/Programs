#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    
}; 
node *root=new node();int x;
 struct node  *te()
{
    node *temp=new node();
      
     cout<<"Enter the  value of new node \n";
     cin>>x;
      root->data=x;
    if(root->data==NULL)
      return root;
      
     cout<<"Enter the left child\n";
      
        
      root->left=te();
      
        cout<<"Enter the right child\n";
        
        root->right=te();
      return root;

}
int main()
{
    node *head,*ptr;
    root->data=4;
      
   head= te();
   ptr=head;
     while(head->left!=NULL){
       cout<<head->data<<" ----->";
       head=head->left;
     }
     cout<<"NULL";
      while(ptr->right!=NULL){
       cout<<ptr->data<<" ----->";
       ptr=ptr->right;
     }
}