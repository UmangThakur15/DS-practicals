#include<iostream>
using namespace std;
int main()
{
int arr[20],n,j,m;
int pos,ele,ch,temp=0;
cout<<"enter the size of arrray: ";
cin>>n;
cout<<"enter the elements of arrray";
for(j=0;j<n;j++)
{
cin>>arr[j];
}
cout<<"Enter choice: 1 for insertion, 2 for deletion, 3 for searching, 4 for display"<<endl;
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        cout<<"Enter the position and element you want to insert"<<endl;
        cin>>pos>>ele;

        m=n-pos-1;

        for(j=n;j>=m;j--)
        {
            arr[j+1]=arr[j];
        }

        arr[pos]=ele;
        n=n+1;
        break;
    case 2:
        cout<<"Enter the position of element you want to delete"<<endl;

        cin>>pos;
        for(j=pos;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
        n=n-1;

        break;

    case 3:
        temp=0;
        cout<<"\nEnter the element to searched : ";
        cin>>ele;
        for(j=0;j<n;j++)
        {
            if(arr[j]==ele)
            {
                cout<<"\n the position is: "<<j+1;
                temp=1;
                break;
            }
        }
        if(temp==0)
            cout<<"\n  Element is not found";
        break;
    case 4:
        for(j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"\nEnter your choice";
    cin>>ch;
}
}

