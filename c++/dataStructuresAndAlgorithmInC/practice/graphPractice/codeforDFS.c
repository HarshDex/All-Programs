#include<stdio.h>
#include<stdlib.h>
void dfs(int n,int ar[n][n],int visited[],int node)
{
    printf("%d ",node);
    visited[node] = 1;
    for(int i = 0;i<n;i++)
    {
        if(ar[node][i] == 1 && !visited[i])
            dfs(n,ar,visited,i);
    }
}
int main()
{
    int n;
    printf("enter the number of vertices : ");
    scanf("%d",&n);

    int ar[n][n];
    int visited[n];

    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            ar[i][j] = 0;
        }
    }

    int e;
    printf("enter the number of edges : ");
    scanf("%d",&e);

    for(int i =0;i<e;i++)
    {
        int s,d;
        printf("enter the source : ");
        scanf("%d",&s);
        printf("enter the destionation : ");
        scanf("%d",&d);
        ar[s][d] = 1;
    }

    for(int i = 0;i<n;i++)
    {
        for(int  j = 0;j<n;j++)
            printf("%d ",ar[i][j]);
        printf("\n");
    }

    printf("printing the graph through dfs :\n");
    for(int i =0;i<n;i++)
    {
        dfs(n,ar,visited,i);
    }

    return 0;
}