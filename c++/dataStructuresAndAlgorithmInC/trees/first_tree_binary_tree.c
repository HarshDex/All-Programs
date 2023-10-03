// tree is a non linear data structure 
// it is mainly implemented by linked tree
#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree * left;
    struct tree * right;
};
struct tree *create(int data)
{
    struct tree *p = (struct tree*)malloc(sizeof(struct tree)); //creating and allocating memory to the pointer 
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p; // return the node 
}
void preOrder(struct tree * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct tree* root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void postOrder(struct tree * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
int main()
{
    struct tree *p = create(4);
    struct tree *p1 = create(1);
    struct tree *p2 = create(6);
    struct tree *p3 = create(5);
    struct tree *p4 = create(2);

    // now linking the node with each other 

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    printf("Preorder transversal : ");
    preOrder(p);
    printf("\n");
    printf("Postorder transversal : ");
    postOrder(p);
    printf("\n");
    printf("Inorder transversal : ");
    inOrder(p);
    return 0;
}