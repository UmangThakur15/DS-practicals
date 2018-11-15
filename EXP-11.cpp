#include<iostream>
using namespace std;
struct node
{
    int data;
    node *l;
    node *r;
}*root=NULL;
class BST
{
public:
    void insert(node *,node *);
    void inorder(node *);
    void preorder(node *);
    void postorder(node *);
    BST()
    {
        root=NULL;
    }

};
void BST:: insert(node *tree, node *newnode)
{
    if(root==NULL)
    {
        root=new(struct node);
        root->data=newnode->data;
        root->l=NULL;
        root->r=NULL;
        cout<<"root node added";
        return;
    }
    if(tree->data>newnode->data)
    {
        if(tree->l!=NULL)
        {
            insert(tree->l,newnode);
        }
        else
        {
            tree->l=newnode;
            tree->l->l=NULL;
            tree->l->r=NULL;
            cout<<"node added to left";
            return;
        }
    }
    else
    {
        if(tree->r!=NULL)
        {
            insert(tree->r,newnode);
        }
        else
        {
            tree->r=newnode;
            tree->r->l=NULL;
            tree->r->r=NULL;
            cout<<"node added to right";
        }
    }

}

void BST::inorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree is empty";
    }
    if(t->l)
    {
        inorder(t->l);
    }
    cout<<t->data;
    if(t->r)
    {
        inorder(t->r);
    }
}
void BST::preorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree is empty";
    }
    cout<<t->data;
    if(t->l)
    {
        preorder(t->l);
    }
    if(t->r)
    {
        preorder(t->r);
    }
}
void BST::postorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree is empty";
    }
    if(t->l)
    {
        postorder(t->l);
    }
    if(t->r)
    {
        postorder(t->r);
    }
    cout<<t->data;
}
main()
{
BST bst;
int ch;
struct node *temp;
cout<<"enter 1 to insert";
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        temp=new(struct node);
        cout<<"enter the value of node";
        cin>>temp->data;
        bst.insert(root,temp);
        break;
    case 2:
        cout<<"inorder Traversal of BST:"<<endl;
            bst.inorder(root);
            cout<<endl;
            break;
    case 3:
        bst.preorder(root);
        cout<<endl;
        break;
    case 4:
        bst.postorder(root);
        cout<<endl;
        break;
    }
    cout<<endl<<"enter 1 to insert, 2 for inorder, 3 for preorder, 4 for postorder";
    cin>>ch;
}
}









