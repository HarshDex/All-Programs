#include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data = data;
        }
};
int height(Node *root){
    if(root == NULL)
        return 0;
    int l = 1 + height(root->left);
    int r = 1 + height(root->right);
    return max(l,r);
}
void printLevelOrder(Node *root,int h){
    if(root == NULL)
        return;
    if(h == 1)
        cout<<root->data<<" ";
    if(h>1){
        printLevelOrder(root->left,h-1);
        printLevelOrder(root->right,h-1);
    }
}
void reverseLevelOrderTraversal(Node *root){
    int h = height(root);
    for(int i = h;i>=1;i--)
        printLevelOrder(root,i);
}

Node *insert(Node *root,int data){
    Node *p = new Node(data);
    p->left = NULL;
    p->right = NULL;
    if(root == NULL)
        return p;
    if(p->data < root->data)
        root->left = insert(root->left,data);
    if(p->data > root->data)
        root->right = insert(root->right,data);
    return root;
}
int main()
{
    int n;
    cout<<"enter the number of nodes present in the binary tree : ";cin>>n;

    Node *root = NULL;

    for(int i = 0;i<n;i++){
        int a;
        cout<<"enter the element : ";cin>>a;
        root = insert(root,a);
    }

    cout<<"printing the tree in reverse level order : "<<endl;
    reverseLevelOrderTraversal(root);
    return 0;
}
