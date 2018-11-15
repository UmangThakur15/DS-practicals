#include <iostream>
using namespace std;
void heap_(int arr[], int n, int i)
{
    int lar = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l<n && arr[l]>arr[lar])
    {
        lar=l;
    }
    if (r<n && arr[r]>arr[lar])
    {
        lar=r;
    }
    if (lar!=i)
    {
        swap(arr[i], arr[lar]);
        heap_(arr, n, lar);
    }
}
void heap__sort(int arr[], int n)
{
    for(int i=(n/2-1);i>=0;i--)
    {
        heap_(arr, n, i);
    }

    for (int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heap_(arr,i,0);
    }
}
int main()
{
    int ar[20],n,i;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    heap__sort(ar, n);
    cout<<"Sorted array is \n";
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<< " ";
    }
}
