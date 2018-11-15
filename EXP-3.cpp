#include<iostream>
using namespace std;
int main()
{
int arr[20],n,i,j;
int element,flag=0,temp;
int mid,min,max;
cout<<"enter the size of array: ";
cin>>n;
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Original array is"<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"Sorted array is"<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";
cin>>element;
min=0;
max=n-1;
mid=(min+max)/2;
if(min<max)
{
    for(i=0;i<n;i++)
    {
        if(arr[mid]==element)
        {
            cout<<"Position of "<<element<<" is "<<mid+1;
            flag=1;
            break;
        }
        else if(arr[mid]>element)
        {
            max=mid-1;
        }
        else if(arr[mid]<element)
        {
            min=mid+1;
        }
        mid=(min+max)/2;
    }
}
if(flag==0)
    {
        cout<<"Element not found ";
    }
return 0;
}
