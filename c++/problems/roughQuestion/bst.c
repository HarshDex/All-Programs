#include<stdio.h>
#include<malloc.h>
struct tree 
{
    struct tree *left ;
    struct tree *right ;
    int data ;
};
struct tree *create(int data)
{
    struct tree *node = (struct tree*)malloc(sizeof(struct tree));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
    return node;
}
//inserting a node in the end
void inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct tree* inorderpre(struct tree* root)
{
    root = root->left;
    while(root!=NULL)
    {
        root = root->right;
    }
    return root;
}
struct tree * insert(struct tree *root,int data)
{
    struct tree *p = create(data);
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
struct tree *deletion(struct tree *root,int data)
{
    struct tree *init;
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data < data)
        root->right = deletion(root->right,data);
    else if(root->data > data)
        root->left = deletion(root->left,data);
    else 
    {
        init = inorderpre(root);
        root->data = init->data;
        root->left = deletion(root->left,init->data);
    }
    return root;
}
int main()
{
    int n;
    printf("enter the number of nodes in bst : ");
    scanf("%d",&n);
    struct tree *root = NULL;
    for(int i =0;i<n;i++)
    {
        int data;
        printf("enter data : ");
        scanf("%d",&data);
        root = insert(root,data);
    }
    inorder(root);
    int d;
    printf("\n");
    printf("\nenter the node which you want to delete : ");
    scanf("%d",&d);
    deletion(root,d);
    inorder(root);
  return 0;
}