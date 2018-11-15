#include<iostream>
using namespace std;
int main()
{
int arr[20],n,i,element,temp=0;

cout<<"Enter the size of array: ";

cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to be searched: ";

cin>>element;
for(i=0;i<n;i++)
{
    if(arr[i]==element)
    {
        cout<<"\nPosition of "<<element<<" is: "<<i+1;
        temp=1;
        break;
    }
}
if(temp==0)
{
    cout<<"\nElement not found\n";
}
return 0;
}
