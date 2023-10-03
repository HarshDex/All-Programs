#include<stdio.h>
#include<malloc.h>
struct node
{
    int vertex;
    struct node * next;
};
void printGraph(struct node *adj[],int n)
{
    for(int i =0;i<n;i++)
    {
        struct node *temp = adj[i];
        printf("vertex -> %d : ",i);
        while(temp != NULL)
        {
            printf("%d ",temp->vertex);
            temp = temp->next;
        }printf("\n");
    }
}
void createGraph(struct node *adj[],int n)
{
    struct node *p;
    int k;
    for(int i =0;i<n;i++)
    {
        int ver;
        printf("enter the number of nodes connected to the vertec %d : ",i);
        scanf("%d",&k);
        struct node *last;
        for(int j = 0;j<k;j++)
        {
            p = (struct node *)malloc(sizeof(struct node));
            printf("enter the vertex which is connected to vertex - %d : ",i);
            scanf("%d",&ver);

            p->vertex = ver;
            p->next = NULL;
            if(adj[i] == NULL)
                adj[i] = p;
            else
                last->next = p;
            last = p;
        }
    }
}
int main()
{
    int n;
    printf("enter the number of vertices : ");
    scanf("%d",&n);

    struct node *adj[n];
    for(int i =0;i<n;i++)
    {
        adj[i] = NULL;
    }

    createGraph(adj,n);
    printGraph(adj,n);

    return 0;
}