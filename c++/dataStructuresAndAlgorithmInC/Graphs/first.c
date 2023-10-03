#include<stdio.h>
struct node 
{
    int vertex;
    struct node *nex;
}
void printGraph(struct graph *adList[],int n)
{
    struct graph *p ;
    for(int i =0;i<n;i++)
    {
        p = adList[i];
        while(p != NULL)
        {
            printf("%d",p->vertex);
            p = p->next;
        }
        printf("\n");
    }
}
void *create(struct node *adj[],int n)
{
    struct node *p;
    struct node *last = NULL;
    int value;
    for(int i =0;i<n;i++)
    {
        int k;
        printf("enter the number of vertex conntected to the node %d : ",i+1);
        scanf("%d",&k);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = value;
        if(adj[i] == NULL);
            adj[i] = last = p;
        else
            last->nex = p;
            last = p;
    }   
}
int main()
{
    int n;
    printf("enter the number of vertex in the graph : ");
    scanf("%d",&n); 

    struct node *adj[n];
    create(adj,n);
    printGraph(adj,n);
  return 0;
}