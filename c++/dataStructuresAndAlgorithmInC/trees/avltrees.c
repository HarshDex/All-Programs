#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void insert(struct node *root,int data)
{
    struct node* p = create(data);
    if(root == NULL)
        root = p;
    else
    {
        struct node *temp = root;
        while(temp!=NULL)
        {

        }
    }
}
int main()
{


    return 0;
}