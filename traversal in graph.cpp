#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *create(int d)
{
    node *temp = new node();
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insert(node *root, int d)
{
    if (root == NULL)
    {
        return create(d);
    }
    else
    {
        if (root->data >
         d)
        {
            node *ptr = insert(root->left, d);
            root->left = ptr;
        }
        else
        {
            node *ptr = insert(root->right, d);
            root->right = ptr;
        }
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    int m;
    node *root = NULL;
    cout << "Enter the no of nodes" << endl;
    cin >> m;
    while (m--)
    {
        int data;
        cout << "enter" << endl;
        cin >> data;
        root = insert(root, data);
    }
 cout<<"\n\nINORDER TRAVERSAL IS-->"<<endl;
    inorder(root);
    cout << endl;
 cout<<"\n\nPREORDER TRAVERSAL IS-->"<<endl;
    preorder(root);
    cout << endl;
     cout<<"\n\nPOSTORDER TRAVERSAL IS-->"<<endl;
    postorder(root);
    return 0;
}
