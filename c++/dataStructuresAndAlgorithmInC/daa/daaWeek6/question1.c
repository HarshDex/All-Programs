#include<stdio.h>
#include<stdlib.h>
int path(int row,int col,int x,int src,int dst,int vis[x][x],int adj[x][x]){
    vis[row][col] =1;
    if(row == src && col == dst && adj[row][col] == 1)
        return  1;
    int delr[] = {-1,0,1,0};
    int delc[] = {0,1,0,-1};
    for(int i =0;i<4;i++){
        int nrow = row + delr[i];
        int ncol = col + delc[i];
        if(nrow >= 0 && nrow < x && ncol >= 0 && ncol < x && !vis[nrow][ncol] && adj[nrow][ncol]== 1) if(path(nrow,ncol,x,src,dst,vis,adj) == 1) return 1;
    }
}
int main(){
    int x;
    printf("enter the number of nodes : ");
    scanf("%d",&x);

    int adj[x][x];
    int vis[x][x];
    for(int i =0;i<x;i++) 
        for(int j =0;j<x;j++) vis[i][j] = 0;

    int e;
    printf("enter the number of edges : ");
    scanf("%d",&e);

    printf("enter the graph : ");
    int src;int dst;
    for(int i =0;i<e;i++){
        printf("enter the source : ");
        scanf("%d",&src);
        printf("enter the destination : ");
        scanf("%d",&dst);
        adj[src][dst] = 1;
    }

    int sr,sc;
    printf("enter start point[row][col] : ");
    scanf("%d%d",&sr,&sc);
    int er,ec;
    printf("enter the destination[row] and [col] :  "); 
    scanf("%d%d",&er,&ec);
    if(path(sr,sc,er,ec,x,vis,adj)) printf("yes,path exsists");
    else printf("path do not exsist");

    return 0;
}