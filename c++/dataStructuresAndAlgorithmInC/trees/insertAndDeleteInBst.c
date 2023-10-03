#include<stdio.h>
#include<malloc.h>
struct tree 
{
    int data;
    struct tree *left;
    struct tree *right;
};
void inOrder(struct tree *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
struct tree *create(int x)
{
    struct tree *p = (struct tree *)malloc(sizeof(struct tree));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct tree *insert(struct tree *root,int data)
{
    struct tree *new = create(data);
    if(root == NULL)
        return new;
    if(root->data == data)
    {
        printf("\nCannot insert duplicate elements in a binary tree !!");
        return NULL;
    }
    else if(root->data > data)
        root->left = insert(root->left,data);
    else if(root->data<data)
        root->right = insert(root->right ,data);
    return root;
}
struct tree *inOrderPre(struct tree *root)
{
    root = root->left;
    while(root->right != NULL)
        root = root->right;
    return root;
}
struct tree *deleteNode(struct tree *root,int value)
{
    struct tree *ipre;
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data > value)
        root->left = deleteNode(root->left , value);
    else if (root->data < value)
        root->right = deleteNode(root->right,value);
    else
    {
        ipre = inOrderPre(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left,ipre->data);
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

    // these are the links 

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

    printf("printing bst before insertion : \n");
    inOrder(n1);

    //inserting the node
    int a;
    printf("\nEnter the value which you want to insert : ");
    scanf("%d",&a);

    n1 = insert(n1,a);
    printf("\nprinting the bst after insertion : \n");
    inOrder(n1);
    
    //deleting the node 
    int x;
    printf("\nenter the data which you want to delete : ");
    scanf("%d",&x);

        
    printf("\nprinting the data after deleting of the element :\n");
    deleteNode(n1,x);
    inOrder(n1);
    return 0;
}