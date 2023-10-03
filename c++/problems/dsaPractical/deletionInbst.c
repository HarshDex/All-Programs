#include<stdio.h>
#include<stdlib.h>
struct node{
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
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node *ipreorder(struct node *root)
{
    root = root->left;
    while(root->right!=NULL)
        root = root->right;
    return root;
}
struct node *deletion(struct node *root,int data)
{
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data > data)
        root->left = deletion(root->left,data);
    else if(root->data < data)
        root->right = deletion(root->right,data);
    else{
        struct node *ipre = ipreorder(root);
        root->data = ipre->data;
        root->left = deletion(root->left,ipre->data);
    }
    return root;
}
struct node *createBst(struct node *root ,int data){
    struct node *p = create(data);
    if(root == NULL)
        return p;
    if(root->data > data)
        root->left = createBst(root->left,data);
    else if(root->data < data )
        root->right = createBst(root->right,data);
    else 
    {
        return NULL;
    }
    return root;
}
int main()
{
    int n;
    printf("enter the number of nodes present in the tree : ");
    scanf("%d",&n);

    printf("enter the elements in the bst : \n");
    struct node *root = NULL;
    for(int i =0;i<n;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        root = createBst(root,a);
    }

    printf("printing the tree (inorder traversal ) : ");
    inorder(root);

    int d;
    printf("enter the data which you want to delete from the tree : ");
    scanf("%d",&d);

    root = deletion(root,d);
    printf("printing the inorder traversal after deleting the node from the tree : ");
    inorder(root);
    return 0;
}