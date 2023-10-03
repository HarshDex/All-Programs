//  PROPERTIES OF BINARY SEARCH TREE :-    
// 1 - It is a type of a binary tree 
// 2 - The data in the left sub tree is always smaller then the right sub tree
// 3 - The left and right sub tree are also binary search tree 
// 4 - There are no duplicate nodes present in the binary search tree
// 5 - In order transversal of a binary search tree gives the ascending sorted array

// Inorder transversal in a binary search tree

#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree* create(int data)
{
    struct tree* n = (struct tree *)malloc(sizeof(struct tree));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct tree*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
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

struct tree *deletion(struct tree *root,int data)
{
    struct tree *init;
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL && root->data == data)
        free(root);
        return NULL;
    if(root->data < data)
        root->right = deletion(root->right,data);
    else if(root->data > data)
        root->left = deletion(root->left,data);
    else 
    {
        init = inorderpre(root);
        root->data = init->data;
        root = deletion(root->left,init->data);
    }
    return root;
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

    printf("printing bst: ");
    inorder(n1);

    printf("\n");

    printf("printing bst after deletion : ");
    n1 = deletion(n1,5);
    inorder(n1);

    
    return 0;
}