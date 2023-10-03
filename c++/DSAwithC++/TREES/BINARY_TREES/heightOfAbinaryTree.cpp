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
void levelOrder(Node *root){
    //implementing level order by using queue
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    // cout<<root->data<<" ";
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
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
