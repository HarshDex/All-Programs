#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
void printData(struct node *root)
{
    if(root!=NULL)
    {
        printData(root->left);
        printf("%d ",root->data);
        printData(root->right);
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
struct node * insert(struct node *root,int data)
{
    struct node *p = create(data);
    if(root == NULL)
        return p;
    else
    {
        if(root->data > data)
            root->left = insert(root->left,data);
        else if(root->data < data)
            root->right = insert(root->right,data);
        else
            printf("N ");
    }
}

int main()
{
    // int n;
    // printf("enter the number of nodes in the tree : ");

    struct node *root = NULL;

    int n;
    printf("enter the number of nodes in the tree : ");
    scanf("%d",&n);
     
    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter the element : ");
        scanf("%d",&a);
        root = insert(root,a);
    }

    printf("printing the inorder traversal of the tree : ");
    printData(root);

    return 0;
}