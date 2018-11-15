#include<iostream>
using namespace std;
int am[10][10],i,j,k,n,stk[10];
int top,v,visit1[10],visited1[10];
int main()
{
    int m;
    cout<<"Enter no of vertices:";
    cin>>n;
    cout<<"Enter no of edges:";
    cin>>m;
    cout <<"\nEdges \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        am[i][j]=1;
    }
    cout<<"Enter initial vertex to traverse from:";
    cin>>v;
    cout<<"DFS order of visited vertices:";
    cout<<v<<" ";
    visited1[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(am[v][j]!=0 && visited1[j]!=1 && visit1[j]!=1)
            {
                visit1[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit1[v]=0;
        visited1[v]=1;
}
    return 0;
}
