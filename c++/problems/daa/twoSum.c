#include<stdio.h>
int x,y;
int TwoSum(int *ar,int n,int key){
    int i =0;
    int j = n-1;
    while(i < j){
        int sum = ar[i] + ar[j];
        if(sum == key){
            x = ar[i];
            y = ar[j];
            return 1;
        }
        else if(sum < key)
            i++;
        else    
            j--;
    }
    return 0;
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *ar,int n,int i){
   int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && ar[l] > ar[largest])
        largest = l;
    if(r < n && ar[r] > ar[largest])
        largest = r;
    if(i != largest)
    {
        swap(&ar[i],&ar[largest]);
        heapify(ar,n,largest);
    }
}
void heapSort(int *ar,int n){
    for(int i = n/2-1;i>=0;i--)
        heapify(ar,n,i);
    for(int i =n-1;i>= 0 ;i--){
        swap(&ar[0],&ar[i]);
        heapify(ar,i,0);
    }
}
int main(){
    int n;
    printf("enter the number of elements in the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("enter the element in the array : ");
    for(int i =0;i<n;i++) scanf("%d",&ar[i]);
    int key;
    printf("enter the key : ");
    scanf("%d",&key);
    //sorting the array using heap sort
    heapSort(ar,n);
    for(int i =0;i<n;i++) printf("%d ",ar[i]);
    int z = TwoSum(ar,n,key);
    if(z == 1)
        printf("\nnumbers having sum equals to %d -> %d and  %d",key,x,y);
    else 

        printf("\nno it does not exsist");
    return 0;
}
// //  Given a graph, design an algorithm and implement it using a program to find if a graph is
// // bipartite or not. (Hint: use BFS)
// // Input Format:
// // Input will be the graph in the form of adjacency matrix or adjacency list.
// // Output Format:
// // Output will be 'Yes Bipartite' if graph is bipartite, otherwise print 'Not Bipartite'.

// #include<stdio.h>
// #include<stdlib.h>
// struct queue{
//     int data;
//     int front;
//     int rear;
//     int *ar;
// };
// int isempty(struct queue *q) { 
//     if(q->rear == -1) return 1;
// }
// void push(int data,struct queue *q){
//     q->rear++;
//     q->ar[q->rear] = 
// }   
// int pop(struct queue *q){
//     if(isEmpty(q)){
//         printf("cannot pop!!");
//     }
//     else {
//         int a = q->ar[q->front++];
//         return a;
//     }
// }
// int main(){
//     int n;
//     printf("enter the number of nodes : ");
//     scanf("%d",&n);
//     int adj[n][n];int vis[n][n];
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<n;i++){
//             adj[i][j] = 0;
//             vis[i][j] = 0;
//         }
//     }
//     int e;
//     printf("enter the number of edges : ");
//     scanf("%d",&e);

//     int row,col;
//     for(int i =0;i<e;i++){
//         printf("enter the row : ");
//         scanf("%d",&row);
//         printf("enter the col : ");
//         scanf("%d",&col);
//         adj[row][col] = 1;
//     }

//     struct queue *q = (int*)malloc(n*(sizeof(int)));
//     q->ar = (int*)malloc(n*(sizeof(int)));
//     vis[0][0] = 1;
//     q.push()

//     // if(c == 1){
//     //     printf("yes,it is bipartite");
//     // }
//     // else printf("no,it is not bipartite");
// }