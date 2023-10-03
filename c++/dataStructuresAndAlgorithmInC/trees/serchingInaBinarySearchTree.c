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

struct tree *search(struct tree *root,int data)
{
    if(root==NULL)
        return NULL;
    if(root->data == data)
        return root;
    else if(data<root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
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

    int a;
    printf("\nEnter the number you want to search in the tree : ");
    scanf("%d",&a);

    struct tree *s = search(n1,a);

    if(s!=NULL)
        printf("element %d found.",s->data);
    else 
        printf("element not found!!");    
    return 0;
}