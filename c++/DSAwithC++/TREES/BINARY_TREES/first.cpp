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
void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
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
void reverseLevelOrderTraversal(Node *root){
    
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
    cout<<endl;

    cout<<"level order traversal of the tree : \n";
    levelOrderTraversal(root);

    return 0;
}
