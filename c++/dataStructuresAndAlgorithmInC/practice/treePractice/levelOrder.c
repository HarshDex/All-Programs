#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
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
int getHeight(struct node *root)
{
    if(root == NULL)
        return 0;
    int a = getHeight(root->left);
    int b = getHeight(root->right);
    return max(a,b) +1;
}
void level(struct node *root,int l,int ar[],int i)
{
    if(root == NULL)
        return;
    if(l == 1)
        ar[i++] = root->data;
        // printf("%d ",root->data);
    if(l > 1)
    {
        level(root->left,l-1,ar,i);
        level(root->right,l-1,ar,i);
    }
}
int levelOrder(struct node *root)
{
    int ar[10];
    int i =0;
    int l = getHeight(root);
    for(int i=1;i<=l;i++)
        level(root,i,ar,i);
    return ar;
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
    arr = levelOrder(root);
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
