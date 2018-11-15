#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int i,j,r,temp,w;
    for(i=0;i<n;i++)
    {
        w=arr[i];
        j=i;
        while(arr[j-1]>w && j>0)
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=w;
    }
}
int main()
{
    int i,arr[20],n,item;
    cout<<"Enter no of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter value to be inserted : ";
    cin>>item;
     i = n-1;
     while(item<arr[i] && i>=0)
     {
           arr[i+1]=arr[i];
           i--;
     }
     arr[i+1]=item;
     n++;
     cout<<"\nArray after insertion is :\n";
      for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
