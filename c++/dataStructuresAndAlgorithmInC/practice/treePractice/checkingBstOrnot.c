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

int check(struct node *root)
{
    static struct node *prev = NULL;
    if(root!=NULL)
    {
        if(!check(root->left))
            return 0;
        if(prev != NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return check(root->right);
    }
    else
        return 1;
}
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
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

    printData(root);
    if(check(root) == 1)
        printf("\nit is a binary search tree");
    else 
        printf("\nit is not a binary search tree");
    return 0;
}