#include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data =data;
            this->left = NULL;
            this->right = NULL;
        }
};
int findHeight(Node *root){
    if(root == NULL)    
        return 0;
    int l = 1 + findHeight(root->left);
    int r = 1 + findHeight(root->right);
    return max(l,r);
}
void solve(Node *root,int level){
    if(root == NULL)
        return;
    if(level == 1)
        cout<<root->data<<" ";
    if(level>1)
    {
        solve(root->left,level-1);
        solve(root->right,level-1);
    }
}
void levelOrder(Node *root){
   int h = findHeight(root);
   for(int i =0;i<h;i++)
    solve(root,i);
}
Node* insert(Node *root,int data){
    Node *p = new Node(data);
    if(root == NULL)
        return p;
    if(root->data > data)
        root->left = insert(root->left,data);
    if(root->data < data)
        root->right = insert(root->right,data);
    if(root->data == data)
        cout<<"cannot insert Same data"<<endl;
    return root;
}
int main()
{
    int n;
    cout<<"enter the number of nodes present in the binary tree : ";cin>>n;

    Node *root = NULL;

    cout<<"enter the element in the binary tree : ";
    for(int i =0 ;i<n;i++)
    {
        int a;cin>>a;
        root = insert(root,a);
    }

    cout<<"height of the tree : "<<findHeight(root)<<endl;
    cout<<"level order traversal of the tree : "<<endl;levelOrder(root);
    return 0;
}
