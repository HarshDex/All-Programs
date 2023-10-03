#include<stdio.h>
#include<stdlib.h>
struct adjlist{
    int verNo;
    struct adjlist *next;
};
struct graph{
    int v;
    int e;
    struct adjlist *adj;
};

void createGraph(){
    struct graph *g = (struct graph*)malloc(sizeof(struct graph));
    printf("enter the number of edges : ");
    scanf("%d",&g->v);
    printf("enter the number of edges : ");
    scanf("%d",&g->e);
    g->adj = (struct adjlist*)malloc(g->v * sizeof(struct adjlist));
    for(int i =0;i<g->v;i++){
        int v;
        printf("enter the vertex : ");
        scanf("%d",&v);
        g->adj->verNo = v;
        g->adj->next = g->adj+i;
    }
    for(int i =0;i<g->e;i++){
        int x;
        int y;
        printf("enter the soruce : ");
        scanf("%d",&x);
        printf("enter the destination : ");
        scanf("%d",&y);
        struct adjlist * temp = (struct adjlist*)malloc(sizeof(struct adjlist));
        temp->verNo = y;
        temp->next = NULL;
        struct adjlist *t = g->adj[x];
        while(t->next!=NULL){
            t->next = temp;
        }
    }

}
int main()
{


    return 0;
}