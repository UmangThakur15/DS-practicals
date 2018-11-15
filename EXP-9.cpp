#include<iostream>
using namespace std;
void swap(int* p, int* q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j;
    for(j=low;j<high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);

        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
int arr[20],i,j,n;
cout<<"enter size of array "<<endl;
cin>>n;
cout<<"enter elements"<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
quicksort(arr,0,n-1);
cout<<"Array after sorting is"<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
