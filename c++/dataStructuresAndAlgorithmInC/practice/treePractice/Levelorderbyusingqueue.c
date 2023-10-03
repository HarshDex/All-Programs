#include<stdio.h>
#include<stdlib.h>
#define max 100
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct queue
{
    int size;
    int f;
    int r;
    int *ar;
};
int isempty(struct queue *q)
{
    if(q->f == q->r)
        return 1;
}
void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void enqueue(struct queue *q,int data)
{
    q->r++;
    q->ar[q->r] = data;
}
int dequeue(struct queue *q)
{
    if(q->f == q->r)
        return;
    else
    {
        int data = q->ar[q->f];
        q->f++;
        return data;
    }
}
void levelOrder(struct node *root)
{
    struct queue q;
    q.size = max;
    q.f = q.r = -1;
    if(root == NULL)
        return;
    else
    {
        while(!isempty(&q))
        {
            
        }

    }
}
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct node *insert(struct node *root,int data)
{
    struct node *p = create(data);
    if(root == NULL)
        return p;
    if(root->data > data)
        root->left = insert(root->left,data);
    else if(root->data < data)
        root->right = insert(root->right,data);
    else   
        printf("N ");
    return root;
}
int main()
{
    int n;
    printf("enter the number of nodes : ");
    scanf("%d",&n);

    struct node *root = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter data : ");
        scanf("%d",&a);
        root = insert(root,a);
    }

    printf("binary tree : ");
    inorder(root);

    printf("\n");
    printf("height of the tree : ");
    printf("%d",getHeight(root));

    printf("\n");
    printf("level order traversal : ");
    int *arr = (int*)malloc(10*sizeof(int));
 
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
