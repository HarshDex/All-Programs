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
struct node *create(int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int getHeight(struct node *root){
    if(root == NULL)
        return 0;
    int l = 1+getHeight(root->left);
    int r = 1+getHeight(root->right);
    return max(l,r);
}
struct node *search(struct node *root,int key){
    if(root == NULL)
        return NULL;
    if(root->data == key)
        return root;
    else if(root->data > key)
        return search(root->left,key);
    else if(root->data < key)
        return search(root->right,key);
    else {
        printf("not found !!");  
        return NULL;
    }
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

    int height = getHeight(root);
    printf("\nHeight of the binary search tree : %d",height);

    int k;
    printf("\nenter the key of node whose height you want to find : ");
    scanf("%d",&k);

    struct node *temp = search(root,k);
    int h = getHeight(temp);
    printf("height of the node which you entered : %d",h);

    return 0;
}