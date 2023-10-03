#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct node *del(struct node *root,int data){

}
struct node *create(int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->right = NULL;
    p->left = NULL;
    return p;
}
struct node *insert(struct node *root,int data){
    struct node *p = create(data);
    if(root == NULL)
        return p;
    if(root->data > data)
        root->left = insert(root->left,data);
    else if(root->data < data)
        root->right = insert(root->right,data);
    else    
        printf("N");
    return root;
}       
int main()
{
    int n;
    printf("enter the number of nodes present in the tree  : ");
    scanf("%d",&n);

    struct node *root = NULL;
    printf("enter  data in the tree : ");
    for(int i = 0;i<n;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        root = insert(root,a);
    }

    printf("printing the inodrer traversal of the tree : ");
    inorder(root);
    return 0;
}