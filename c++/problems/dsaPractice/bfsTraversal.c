#include<stdio.h>
#include<stdlib.h>
int n;
struct queue{
    int f;
    int r;
    int size;
    int *ar;  
};
int isFull(struct queue *q){
    if(q->r == q->size)
        return 1;
    return 0;
}
int isEmpty(struct queue *q){
    if(q->f == q->r)
        return 1;
    return 0;
}
void enqueue(struct queue *q , int data){
    if(isFull(q))
        return;
    else{
        q->r++;
        q->ar[q->r] = data;
        return;
    }
}   
int dequeue(struct queue *q){
    if(isEmpty(q))  
        return -1;
    else{
        q->f++;
        return q->ar[q->f];
    }
}
void bfsTraversal(int ar[n][n],int *visited){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = -1;
    q->ar = (int *)malloc(q->size*sizeof(int));
    int i =0;
    printf("%d ",i);
    visited[i] = 1;
    enqueue(q,i);  // enqueue i for exploration 
    while(!isEmpty(q)){
        int node = dequeue(q);
        for(int j =0;j<n;j++){
            if(ar[node][j] == 1 && visited[j] == 0){
                printf("%d ",j);
                visited[j] = 1;
                enqueue(q,j);
            }
        }
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
    bfsTraversal(ar,v);

    return 0;
}