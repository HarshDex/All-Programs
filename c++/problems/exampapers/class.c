//write a c program to count the number of nodes in the binary search tree 
#include<stdio.h>
#include<malloc.h>
struct tree 
{
    int data;
    struct tree *left;
    struct tree *right;
    // int count;
};
// static coun =0;
struct tree *create(int data)
{
    struct tree *p = (struct tree *)malloc(sizeof(struct tree));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void count(struct tree *root)
{
    // c++;
    if(root !=  NULL)
    {
        count(root->left);
        count(root->right);
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

    count(n1);
    // cout<<"total number of nodes in the tree are : "<<c;
    printf("total number of nodes in the tree are : %x");
  return 0;
}