//find the diameter of the tree 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int max(int a,int b){
    return a>b?a:b;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int height(struct node *root){
    if(root == NULL)
        return 0;
    int l = 1+height(root->left);
    int r = 1+height(root->right);
    return max(l,r);
}
int diameter(struct node *root){
    if(root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    return max(1+lh+rh,max(ld,rd));
}
struct node *create(int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct node *insert(struct node *root,int data){
    struct node *p = create(data);
    if(root == NULL)
        return  p;
    if(root->data > data)
        root->left = insert(root->left,data);
    else if(root->data < data)
        root->right = insert(root->right,data);
    else    
    {
        printf("cannot insert duplicate elements!!");
        return NULL;
    }
    return root;
}
int main()
{
    int n;
    printf("enter the number of nodes present in the tree : ");
    scanf("%d",&n);

    struct node *root = NULL;
    printf("enter the data in the binary search tree : \n");
    for(int i =0;i<n;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        root = insert(root,a);
    }

    printf("printing the inorder traversal of the tree : ");
    inorder(root);

    int d = diameter(root);
    printf("\ndiameter of the tree : %d",d);

    return 0;
}