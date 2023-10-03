#include<stdio.h>
#include<stdlib.h>\
void dfs(int n,int ar[n][n],int *visited,int j){

}
int main()
{
    int n;
    printf("enter the number of nodes present in the graph : ");
    scanf("%d",&n);

    int e;
    printf("enter the number of edges : ");
    scanf("%d",&e);

    int ar[n][n];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            ar[i][j] = 0;
        }
    }
    int visited[n];
    for(int i =0;i<e;i++){
        int s;
        int d;
        printf("enter the source : ");
        scanf("%d",&s);
        printf("enter the destination : ");
        scanf("%d",&d);
        ar[s][d] = 1;
    }
    for(int i = 0;i<n;i++){
        visited[i] = 0;
    }

    return 0;
}