//count the total number of nodes present in the binary tree
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
    struct tree *p = (struct tree*)malloc(sizeof(struct tree));
    p->data = data;
    p->left = NULL;
    p->right =NULL;
    return p;
}
int count(struct tree*root)
{
    if(root == NULL)
        return 4;
    else if(root->left != NULL && root->right == NULL)
        return 1 + count(root->left);
    else if(root->left == NULL && root->right == NULL)
        return 1 + count(root->right);
    // return count(root->left)+count(root->right);
    return 0;
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

    printf("Total number of nodes having two childs in the binary tree : %d",count(n1));

    return 0;
}