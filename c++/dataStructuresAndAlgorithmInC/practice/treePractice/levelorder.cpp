//question : print the lever order of the tree : This solution has O(n^2) time complexity
// this can be eaisly solved by queue data structure 
#include <bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
    }
};

void printData(vector<int> &v)
{
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

Node *create(int data)
{
    Node *p = new Node(data);
    p->left = NULL;
    p->right = NULL;
    return p;
}
int getHeight(Node *root)
{
    if(root == NULL)
        return 0;
    int a = getHeight(root->left);
    int b = getHeight(root->right);
    return max(a,b)+1;
}
void solve(Node *root,vector<int> &ans,int l)
{
    if(l == 0)
        return;
    if(l == 1)
        ans.push_back(root->data);
    else if(l > 1)
    {
        solve(root->left,ans,l-1);
        solve(root->right,ans,l-1);
    }
}
vector<int> leverOrder(Node *root)
{
    vector<int> ans;
    int l = getHeight(root);
    for(int i =1;i<=l;i++)
        solve(root,ans,i);
    return ans;
}
Node *insert(Node *root,int data)
{
    Node *p = create(data);
    if(root == NULL)
        return p;
    if(root->data > data)   
        root->left = insert(root->left,data);
    else if(root->data < data)
        root->right = insert(root->right,data);
    else 
        cout<<"N ";
    return root;
}
int main()
{
    int n;
    cout<<"enter the number of nodes : ";
    cin>>n;
    
    Node *root = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter element : ";
        cin>>a;
        root= insert(root,a);
    }

    cout<<"Level order traversal : ";
    vector<int> ans = leverOrder(root);
    printData(ans);
    return 0;
}
