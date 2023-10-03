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
void printData(Node *root){
    if(root!=NULL){
        printData(root->left);
        cout<<root->data<<" ";
        printData(root->right);
    }
}

void inorder(Node *root,int &count){
    if(root!=NULL){
        inorder(root->left,count);
        if(root->left == NULL && root->right == NULL)
            count++;
        inorder(root->right,count);
    }
}
int NumberOfLeafNode(Node *root){
    int count = 0;
    inorder(root,count);
    return count;
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

    cout<<"printing the tree in ascending order : ";
    printData(root);
    
    int count = NumberOfLeafNode(root);
    cout<<"\ntotal number of leaf nodes present in the tree are : "<<count<<endl;
    
    return 0;
}
