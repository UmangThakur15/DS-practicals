#include<iostream>
using namespace std;
int am[10][10],i,j,k,n,qu[10];
int front,rare,v,visit1[10],visted1[10];
int main()
{
    int m;
    cout<<"Enter no of vertices:";
    cin>>n;
    cout<<"Enter no of edges:";
    cin>>m;
    cout<<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin>>i>>j;
        am[i][j]=1;
    }
    cout<<"Enter initial vertex to traverse from:";
    cin>>v;
    cout<<"Visitied vertices:";
    cout<<v<<" ";
    visted1[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(am[v][j]!=0 && visted1[j]!=1 && visit1[j]!=1)
            {
                visit1[j]=1;
                qu[rare++]=j;
            }
        v=qu[front++];
        cout<<v<<" ";
        k++;
        visit1[v]=0;
        visted1[v]=1;
    }
    return 0;
}
