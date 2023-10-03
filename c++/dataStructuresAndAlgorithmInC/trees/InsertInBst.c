#include<stdio.h>
#include<stdlib.h>
struct tree 
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *create(int data)
{
    struct tree *p =(struct tree*)malloc(sizeof(struct tree));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void inOrder(struct tree *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void insert(struct tree *root,int data)
{
    struct tree *p = create(data);
    struct tree *prev;
    while(root!=NULL)
    {
        prev = root;
        if(root->data == data)
        {
            printf("cannot enter duplicate data in the binary search tree ");
            return ;
        }
        else if (root->data > data)
            root = root->left;
        else 
            root = root->right;
    }
    if(prev->data > p->data)
        prev->left = p;
    else 
        prev->right = p;   
}
int main()
{
    struct tree *root,*n1,*n2,*n3,*n4,*n5,*n6;
    root = create(100);
    n1 =create(50);
    n2 = create(80);
    n3 = create(120);
    n4 = create(110);
    n5 = create(150);
    n6 = create(90);

    root->left = n2;
    root->right = n3;

    n2->left = n1;
    n2->right = n6;

    n3->left = n4;
    n3->right = n5;

    printf("Printing Bst: ");
    inOrder(root);

    int a ;
    printf("\nEnter the digit you want to insert : ");
    scanf("%d",&a);

    insert(root,a);
    printf("Again printing the bst: ");
    inOrder(root);

}