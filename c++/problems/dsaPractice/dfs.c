#include<stdio.h>
#include<stdlib.h>
int n;
void dfs(int ar[n][n],int *visited,int i){
    printf("%d ",i);
    visited[i] = 1;
    for(int j = 0;j<n;j++){
        if(ar[i][j] == 1 && !visited[j])
            dfs(ar,visited,j);
    }
}
int main()
{
    printf("enter the number of vertices : ");
    scanf("%d",&n);

    int ar[n][n];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            ar[i][j] = 0;
        }
    }

    printf("enter the number of edges : ");
    int e;
    scanf("%d",&e);
    for(int i =0;i<e;i++){
        int s;
        int d;
        printf("enter the source : ");
        scanf("%d",&s);
        printf("enter the destination : ");
        scanf("%d",&d);
        ar[s][d]= 1;
    }

    int v[n];
    for(int i =0;i<n;i++){
        v[i] = 0;
    }

    dfs(ar,v,0);
    return 0;
}