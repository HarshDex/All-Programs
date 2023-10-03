// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//   int verNo;
//   struct node *next;
// };
// struct graph
// {
//   int v;
//   int e;
//   struct node *adj;

// };
// struct graph *adjlist()
// {
//     struct node *temp;
//     struct graph *g = (struct graph*)malloc(sizeof(struct graph));
//     printf("enter the number of nodes : ");
//     scanf("%d",&g->v);
//     printf("enter the number of edges : ");
//     scanf("%d",&g->e);
//     g->adj = (struct node *)malloc(g->v*sizeof(struct node));
//     for(int i =0;i<g->v;i++)
//     {
//       // char a;
//       // scanf("enter the name of the vertex : ");
//       // scanf("%c",&a);
//       g->adj[i]->verNo = i;
//       g->adj[i]->next = g->adj[i];
//     }
//     struct node *t;
//     for(int i =0;i<g->e;i++)
//     {
//       printf(" 1 -> :\n");
//       int x;
//       printf("enter the source : ");
//       scanf("%d",&x);
//       int y;
//       printf("enter the destination: ");
//       scanf("%d",&y);
//       temp = (struct node *)malloc(sizeof(struct node));
//       temp->verNo = y;
//       temp->next = g->adj[x];
//       t = g->adj[x];
//       while(t->next != g->adj[x])
//         t = t->next;
//       t->next = temp; 
//     }
// }
// int main()
// {
//   printf("Graph :\n");
//   adjList();
  
//   return 0;
// }

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int vertex;
    struct node *next;
};
struct graph 
{
    int v;
    int e;
    struct node *adj;
};
void createGraph()
{
    struct graph *G = (struct graph *)malloc(sizeof(struct graph));
    printf("enter the number of vertices : ");
    scanf("%d",&G->v);

    printf("enter the number of edges : ");
    scanf("%d",&G->e);

    G->adj = (struct node *)malloc(G->v * sizeof(struct node));

    for(int i =0;i<G->v;i++)
    {
        G->adj[i]->vertex = i;
    }
}
int main()
{


    return 0;
}