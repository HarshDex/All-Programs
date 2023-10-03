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
int check(struct tree *root)
{
    static struct tree *prev = NULL;
    if(root!=NULL)
    {
        if(!check(root->left))
            return 0;
        if(prev!=NULL && root->data <=prev->data)
        {
            return 0;
        }
        prev = root;
        return check(root->right);   
    }
    else
        return 1;
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

    printf("Printing BST: ");
    inorder(n1);

    //now checking wether the bt is bst or not

    if(check(n1)==1)
        printf("\nIt is a binary search tree");
    else 
        printf("\nIt is not a binary search tree !!");
    return 0;
}