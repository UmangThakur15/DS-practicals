#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct linked__list
{
    struct node *h,*t;
    linked__list()
    {
        h=NULL;
        t=NULL;
    }
    void insert_begin();
    void display();
    void insert();
    void deletion1();
    void search();
};
node* createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
void linked__list::insert_begin()
{
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        node *p,*ptr;
        p=createnode(element);
        if(h==NULL)
        {
            h=p;
            t=p;
        }
        else
        {
            p->next=h;
            h->prev=p;
            h=p;
        }
    }
    t->next=h;
    h->prev=t;
}
void linked__list::insert()
{
    int ch,element,x;
    cout<<"\nEnter choice:\n1 for insertion in beginning, \n2 for insertion at end, \n3 for insertion in between\n";
    cin>>ch;
    node *p=NULL,*temp,*ptr;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cout<<"Enter the element to be added: ";
            cin>>element;
            p=createnode(element);
            p->next=h;
            h->prev=p;
            h=p;
            t->next=h;
            h->prev=t;
            break;
        case 2:
            cout<<"Enter the element to be added: ";
            cin>>element;
            p=createnode(element);
            t->next=p;
            p->prev=t;
            t=p;
            t->next=h;
            h->prev=t;
            break;
        case 3:
            cout<<"\nEnter an element to add: ";
            cin>>element;
            cout<<"Enter the element after you want to add: ";
            cin>>x;
            p=createnode(element);
            ptr=h;
            while(ptr->data!=x)
            {
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=p;
            p->prev=ptr;
            temp->prev=p;
            p->next=temp;
            break;
        default:
            cout<<"Wrong choice\nPlease enter 1-3 else 0 to exit.";
            break;
        }
        cout<<"\nEnter choice to insert: ";
        cin>>ch;
    }
    cout<<"\nElement Inserted";
}
void linked__list::deletion1()
{
    int element;
    cout<<"\nEnter an element you want to delete: ";
    cin>>element;
    node *temp,*p;
    p=h;
    if(h->data==element)
    {
        h=h->next;
        t->next=h;
        h->prev=t;
    }
    else if(t->data==element)
    {
        t=t->prev;
        t->next=h;
        h->prev=t;
    }
    else
    {
        while(p->data!=element)
        {
            p=p->next;
        }
        temp=p->prev;
        temp->next=p->next;
        p->next->prev=temp;
    }
    cout<<"\nElement deleted";

}
void linked__list::search()
{
    int element;
    cout<<"Enter element to be searched: ";
    cin>>element;
    node *p;
    p=h;
    while(p->data!=element && p->next!=h)
    {
        p=p->next;
    }
    if(p->data==element)
        cout<<"\nNode exists";
    else
        cout<<"\nNode does not exist";
}

void linked__list::display()
{
    node *ptr=h;
    if(h==NULL)
        cout<<"Linked List is empty";
    else
        while(ptr->next!=h)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->data;
}
int main()
{
    int ch;
    linked__list l1;
    l1.insert_begin();
    cout<<"\nEnter choice:\n1 for insertion, \n2 for deletion, \n3 for search, \n4 for display\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            l1.insert();
            break;
        case 2:
            l1.deletion1();
            break;
        case 3:
            l1.search();
            break;
        case 4:
            l1.display();
            break;
        default:
            cout<<"\nWrong choice\n";
            break;
        }
        cout<<"\nEnter choice again:\n1 for insertion, \n2 for deletion, \n3 for search, \n4 for display\n";
        cin>>ch;
    }
}
