#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
class stackk
{
public:
    node *top=NULL;
    void push(int a)
    {
        struct node *y;
        y=new(struct node);
        y->info=a;
        if(top==NULL)
        {
        y->next=NULL;
        top=y;
        }
        else
        {
            y->next=top;
            top=y;
        }

    }
    void pop()
    {
        cout<<"Element to be popped "<<top->info<<endl;;
        top=top->next;
    }
    void display()
    {
        cout<<"Elements are"<<endl;
        while(top!=NULL)
        {
            cout<<top->info<<" ";
            top=top->next;
        }
    }
};
int main()
{
    stackk s1;
    int i,n,item;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>item;
        s1.push(item);
    }
    s1.pop();
    s1.display();
    return 0;
}
