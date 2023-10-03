#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
void printData(struct node *root)
{
    if(root!=NULL)
    {
        printData(root->left);
        printf("%d ",root->data);
        printData(root->right);
    }
}
struct node *create(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
// void insert(struct node *root,int data)
// {
//     struct node *prev = NULL;
//     struct node *p = create(data);
//     while(root!=NULL)
//     {   
//         prev = root;
//         if(root->data == data)
//             return;
//         else if(root->data>data)
//             root = root->left;
//         else if(root->data<data)
//             root = root->right;
//     }
//     if(data < prev->data)
//         prev->left = p;
//     else
//         prev->right = p;
// }

struct node *ipreorder(struct node *root)
{
    root = root->left;
    while(root->right != NULL)
        root = root->right;
    return root;
}
struct node * delete(struct node *root,int data)
{
    struct node *ipre;
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data > data)
        root->left = delete(root->left,data);
    else if(root->data < data)
        root->right =delete(root->right,data);
    else
    {
        ipre = ipreorder(root);
        root->data = ipre->data;
        root = delete(root->left,ipre->data);
    }
    return root;
}

int main()
{
    struct node *root = create(100);
    struct node *n1 = create(80);
    struct node *n2= create(120);
    struct node *n3 = create(70);
    struct node *n4 = create(90);
    struct node *n5 = create(110);
    struct node *n6 = create(130);

    //connecting edges : 
     
    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;

    n2->left = n5;
    n2->right = n6;

    printData(root);

    printf("\n");

    root = delete(root,100);
    printData(root);


    return 0;
}