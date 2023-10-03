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

struct node *ipreOrder(struct node *root)
{
    root = root->left;
    while(root!=NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deletion(struct node *root,int data)
{
    struct node *ipre;
    struct node *p = root;
    if(root!=NULL)
    {
        if(root == NULL)
            return root;
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
            ipre = ipreOrder(root);
            root->data = ipre->data;
            root->left = deletion(root->left,ipre->data);
        }
    }
    return root;
}

void insert(struct node *root,int data)
{
    static struct node *prev = NULL;
    struct node *p = create(data);
    while(root!=NULL)
    {
        prev = root;

        if(root->data>data)
            root = root->left;
        else if(root->data<data)
            root = root->right;
    }   
    if(prev->data > data)
        prev->left = p;
    else
        prev->right = p;
}
int main()
{
    struct node *root = create(100);
    struct node *n1 = create(80);
    struct node *n2= create(120);
    struct node *n3 = create(70);
    struct node *n4 = create(90);
    struct node *n5 = create(110);
    struct node *n6 = create(130);

    //connecting edges : 
     
    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;

    n2->left = n5;
    n2->right = n6;

    
    printf("printing the tree before insertion : ");
    printData(root);

    printf("\nprinting the tree after insertion : ");
    insert(root,40);
    printData(root);

    printf("\nprinting the tree after deletion : ");
    root = deletion(root,120);
    printData(root);

   return 0;
}