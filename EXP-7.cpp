#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *link;
};

struct linkedlist
{
    node *front,*r;
    linkedlist()
    {
        front=NULL;
        r=NULL;
    }
    void insert_begin();
    void display1();
    node* createnode(int);
    void delete1();
};
node* linkedlist::createnode(int x)
{
    node *temp=new node;
    temp->info=x;
    temp->link=NULL;
    return temp;
}
void linkedlist::insert_begin()
{
    int element;
    cin>>element;
    node *p,*ptr;
    p=createnode(element);
    if(front==NULL)
    {
        front=p;
        r=p;
    }
    else
    {
        r->link=p;
        r=p;
    }
}
void linkedlist::display1()
{
    r->link=front;
    node *temp=front;
    if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        while(temp->link!=front)
        {
            cout<<temp->info<<" ";
            temp=temp->link;
        }
        cout<<temp->info;
    }
}
void linkedlist::delete1()
{
    if(front==r)
    {
        cout<<"Deleted element is: "<<front->info<<endl;
        front=NULL;
    }
    else if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        cout<<"element Deleted is: "<<front->info<<endl;
        node* temp=front;
        front=front->link;
        delete temp;
    }
}
int main()
{
    int ch,n,count=0;
    linkedlist l1;
    cout<<"Enter the size of queue ";
    cin>>n;
    cout<<"\nEnter choice 1 to Insert 2 to Display 3 to Delete\n";
    cin>>ch;
    while(ch)
    {
        if(ch==1 )
        {
            if(count==n)
            {
                cout<<"Overflow";
            }
            else
            {
                l1.insert_begin();
                count++;
            }
        }
        else if(ch==2)
        {
            l1.display1();
        }
        else if(ch==3)
        {
            l1.delete1();
            count--;
        }
        cout<<"\nEnter choice 1 to Insert 2 to Display 3 to Delete ";
        cin>>ch;
    }
}

