//inputing a graph in form of linked list 
#include<stdio.h>
#include<malloc.h>
struct graph
{
    int weight;//
    int vertex;
    struct graph *next;
};
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
void input(struct graph *adList[],int n)
{
    struct graph* p,*last;
    for(int i  =0;i<n;i++)
    {
        last = NULL;
        int value;
        printf("enter the number of nodes in the %d adjencency list : ",i+1);
        int k;
        scanf("%d",&k);
        for(int j =0;j<k;j++)
        {
            printf("enter the  value of the node : ");
            scanf("%d",value);
            p = (struct graph*)malloc(sizeof(struct graph));
            p->vertex = value;
            p->next = NULL;
            if(adList[i] == NULL)
                adList[i] = last = p;
            else
            {
                last -> next = p;
                last = p;
            }
        }
    }
}   
int main()
{
    int n;
    printf("enter the number of elment in the adjecency list : ");
    scanf("%d",&n);

    struct graph *adj[n];
    input(adj,n);

    printGraph(adj,n);
    return 0;
}