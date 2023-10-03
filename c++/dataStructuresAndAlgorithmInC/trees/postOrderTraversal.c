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
    struct tree *n = (struct tree*)malloc(sizeof(struct tree));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// void preOrder(struct tree * root)
// {
//     if(root!=NULL)
//     {
//         printf("%d ",root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }
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
    struct tree *r,*p,*c,*l;
    r = create(1);
    p = create(2);
    c = create(3);
    l = create(4);
     
    r->left = p;
    r->right = NULL;
    p->left = c;
    p->right = NULL;
    c->left = l;
    c->right = NULL;

    // preOrder(r);
    printf("Implementing post order transversal : ");
    postOrder(r);
    return 0;
}