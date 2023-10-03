#include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
void printData(Node *root){
    if(root!=NULL){
        printData(root->left);
        cout<<root->data<<" ";
        printData(root->right);
    }
}
void create(Node* &root){
    int data;
    cout<<"enter the data for the root node : ";cin>>data;
    root = new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp =  q.front();
        q.pop();

        int leftData;
        cout<<"enter the data for the left node of "<<temp->data<<" : ";cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout<<"enter the data for the right node of "<<temp->data<<" : ";cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = NULL;
    create(root);
    printData(root);
    return 0;
}
