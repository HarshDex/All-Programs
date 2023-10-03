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
}
int main()
{
    // int n;
    // printf("enter the number of nodes in the tree : ");

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





  return 0;
}