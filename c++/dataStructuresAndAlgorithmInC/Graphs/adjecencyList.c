#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node *next;
};
void printData(struct node *adj[],int n)
{
    struct node *temp;
    for(int i =0;i<n;i++)
    {
        temp = adj[i];
        printf("vertices adjecent to %d are : ",i+1);
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void readGraph(struct node *adj[],int n)
{
    struct node *newnode;
    int k;
    for(int i=0;i<n;i++)
    {
        int value;
        printf("enter the number of node connected %d : ",i+1);
        scanf("%d",&k);
        struct node *last ; 
        for(int j = 0;j<k;j++)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("enter the %d neightbor of %d : ",j+1,i+1);
            scanf("%d",&value);
            newnode->data = value;
            newnode->next = NULL;
            if(adj[i] == NULL)
            {
                adj[i] = newnode;
            }
            else
            {
                last->next = newnode;
            }
            last = newnode;
        }
    }
}

int main()
{
    int n;
    printf("enter the number of vertices in the graph : ");
    scanf("%d",&n);

    // struct node *ad = (int*)malloc(n*sizeof(int));
    struct node *ad[n];

    for(int i=0;i<n;i++)
    {
        ad[i] = NULL;
    }

    readGraph(ad,n);
    printData(ad,n);
    

  return 0;
}