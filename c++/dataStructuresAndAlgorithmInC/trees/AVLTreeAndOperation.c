#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    int height;
    struct tree *left;
    struct tree *right;
};
int getHeight(struct tree *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
struct tree *create(int data)
{
    struct tree *p = (struct tree *)malloc(sizeof(struct tree));
    p->data = data;
    p->height = 1;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int balanceFactor(struct tree *root)
{
    if (root == NULL)
        return 0;
    return getHeight(root->left) - getHeight(root->right);
}
struct tree *rightRotate(struct tree *y)
{
    struct tree *x = y->left;
    struct tree *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left) + 1);

    x->height = max(getHeight(x->right), getHeight(x->left) + 1);

    return x;
}
struct tree *leftRotate(struct tree *x)
{
    struct tree *y = x->right;
    struct tree *t2 = y->left;

    x->right = t2;
    y->left = x;
    y->height = max(getHeight(y->right), getHeight(y->left) + 1);
    x->height = max(getHeight(x->right), getHeight(x->left) + 1);

    return y;
}
struct tree *insert(struct tree *root, int data)
{
    if (root == NULL)
        return create(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int bf = balanceFactor(root);

    if (bf > 1 && data < root->left->data)
        return rightRotate(root);
    if (bf < -1 && data > root->right->data)
        return leftRotate(root);
    if (bf > 1 && data > root->left->data)
        root->left = leftRotate(root->left);
    return rightRotate(root);

    if (bf < -1 && data < root->left->data)
        root->right = rightRotate(root);
    return leftRotate(root);

    return root;
}
void preOrder(struct tree *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    struct tree *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    printf("Printing BST :");
    preOrder(root);

    return 0;
}