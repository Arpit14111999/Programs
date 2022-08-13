#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};
node *loc;
node *par;
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
void search(node *root, int item)
{
    int i = 1;
    if (root == NULL)
    {
        loc = NULL;
        par = NULL;
        return;
    }
    else if (root->data == item)
    {
        loc = root;
        par = NULL;
        return;
    }
    else
    {
        node *ptr;
        node *save;
        if (item < root->data)
        {
            ptr = root->left;
            save = root;
            i++;
        }
        else
        {
            ptr = root->right;
            save = root;
            i + 2;
        }
        while (ptr != NULL)
        {
            if (item == ptr->data)
            {
                loc = ptr;
                par = save;

                break;
            }
            else
            {
                if (item < ptr->data)
                {
                    save = ptr;
                    ptr = ptr->left;
                    i++;
                }
                else
                {
                    save = ptr;
                    ptr = ptr->right;
                    i = i + 2;
                }
            }
        }
        if (ptr == NULL)
        {
            loc = NULL;
            par = save;
        }
        if (loc == NULL)
        {
            cout << "ELEMENT IS NOT PRESENT" << endl;
        }
        else
        {
            cout << "ELEMENT FOUND"
                 << endl;
        }
    }
}
void casea(node *root, node *loc, node *par)
{
    node *child;
    if (loc->left == NULL && loc->right == NULL)
    {
        child = NULL;
    }

    else if (loc->left != NULL)
        child = loc->left;
    else
        child = loc->right;
    if (par != NULL)
    {
        if (loc == par->left)
            par->left = child;
        else
            par->right = child;
    }
    else
    {
        root = child;
    }
}
void caseb(node *root, node *loc, node *par)
{
    node *suc;
    node *parsuc;
    node *ptr = loc->right;
    node *save = loc;
    while (ptr->left != NULL)
    {
        save = ptr;
        ptr = ptr->left;
    }
    suc = ptr;
    parsuc = save;
    casea(root, suc, parsuc);
    if (par != NULL)
    {
        if (loc == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    else
    {
        root = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}
void deelete(node *root)
{
    cout << "enter the element you want to delete" << endl;
    int i;
    cin >> i;
    search(root, i);
    if (loc->left != NULL && loc->right != NULL)
        caseb(root, loc, par);
    else
        casea(root, loc, par);
}
void display(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    display(root->left);

    display(root->right);
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
        cout << "enter element" << endl;
        cin >> data;
        root = insert(root, data);
    }
    // cout << "ENTER THE ELEMNT U WANT TO SEARCH" << endl;
    // int item;
    // cin >> item;
    // search(root, item);
    deelete(root);
    display(root);
    return 0;
}
