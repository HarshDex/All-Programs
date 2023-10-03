#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
void preOrder(struct node *root)
{
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int getHeight(struct node *n)
{
    if(n == NULL)
        return 0;
    return n->height;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int balanceFactor(struct node *root)
{
    if(root == NULL)
        return 0;
    return getHeight(root->left)-getHeight(root->right);
}
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->left = NULL;
    p->right = NULL;
    p->data = data;
    p->height = 1;
    return p;
}
struct node *rightRotation(struct node *y)
{
    struct node *x  = y->left;
    struct node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->left),getHeight(y->right)) +1;
    x->height = max(getHeight(x->left),getHeight(x->right)) +1;
    return x;
}
struct node *leftRotation(struct node *x)
{
    struct node *y  = x->right;
    struct node *t2 = y->left;

    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->left),getHeight(y->right)) +1;
    x->height = max(getHeight(x->left),getHeight(x->right)) +1;
    return y;
}
struct node* insert(struct node *root,int data)
{
    struct node *p = create(data);
    if(root == NULL)
        return p;
    if(root->data > data)
        root->left = insert(root->left,data);
    else if(root->data < data)
        root->right = insert(root->right,data);
    
    root->height = max(getHeight(root->left),getHeight(root->right)) + 1;
    int bf = balanceFactor(root);

    if(bf > 1 && data < root->data)
        return rightRotation(root);
    if(bf < -1 && data > root->data)
        return leftRotation(root);
    if(bf > 1 && root->data > data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    if(bf < -1 && data < data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    return root;
}
int main()
{

    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);

    struct node *root = NULL;
    for(int i =0;i<n;i++)
    {
        int data;
        printf("enter element : ");
        scanf("%d",&data);
        root = insert(root,data);
    }
    printf("printing the preorder traversal of the avl tree : ");
    preOrder(root);
    return 0;
}