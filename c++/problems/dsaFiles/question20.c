//20.	Write a C program to create Binary search tree and perform following operations on it.
// (i) Delete node 
// ii) search node	  

#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

void inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct tree* create(int data)
{
    struct tree* n = (struct tree *)malloc(sizeof(struct tree));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct tree *inorderPre(struct tree *root)
{
    root = root->left;
    while(root->right!=NULL)
        root = root->right;
    return root;
}
struct tree *del(struct tree *root,int value)
{
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data > value)
        root->left = del(root->left,value);
    else if(root->data < value)
        root->right = del(root->right , value);
    else
    {
        struct tree * ipre = inorderPre(root);
        root->data = ipre->data;
        root->left = del(root->left,ipre->data);
    }
    
}
int main()
{
    struct tree *n1 = create(9);
    struct tree *n2 = create(4);
    struct tree *n3 = create(11);
    struct tree *n4 = create(2);
    struct tree *n5 = create(7);
    struct tree *n6 = create(13);
    struct tree *n7 = create(5);
    struct tree *n8 = create(8);
    struct tree *n9 = create(14);

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    n3->left = NULL;
    n3->right = n6;
    
    n5->left = n7;
    n5->right = n8;

    n6->left = NULL;
    n6->right = n9;

    printf("printing the sorted array via inorder transveral : ");
    inorder(n1);

    int k;
    printf("\nenter the node which you want to delete : ");
    scanf("%d",&k);

    n1 = del(n1,k);
    inorder(n1);
    return 0;
}