#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data){
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
struct node * insert(struct node *root,int data){
    struct node *p = create(data);
    if(root == NULL)   
        return p;
   if(root->data > data){
        root->left = insert(root->left,data);
    }
    else if(root->data < data){
        root->right = insert(root->right,data);
    }
    else 
        printf("N");
    return root;
}
struct node *ipre(struct node *root){
    root = root->left;
    while(root!=NULL){
        root= root->right;
    }
    return root;
}
struct node  *deleting(struct node *root,int data){
    if(root == NULL)
        return NULL;
    if(root->right == NULL && root->left == NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data > data)
        root->left = deleting(root->left,data);
    else if(root->data < data)
        root->right = deleting(root->right,data);
    else{
        struct node *iter = ipre(root);
        root->data = iter->data;
        root->right = deleting(root->right,iter->data);
    }
    return root;
}
int main()
{
    int n;
    printf("enter the number of nodes present in the bst : ");
    scanf("%d",&n);

    struct node *root = NULL;
    for(int i =0;i<n;i++){
        int a;
        printf("enter data : ");
        scanf("%d",&a);
        root = insert(root,a);
    }
    printf("printing the inorder traversal of the tree : ");
    inorder(root);
    printf("\n");
    int data;
    printf("\nenter the data which you want to delete : ");
    scanf("%d",&data);
    deleting(root,data);
    inorder(root);
    return 0;
}