// add two numbers represented by linked list 
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public : 
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
};
void insert(Node *&head,int data)
{
    Node *p = new Node(data);
    if(head == NULL)
        head = p;
    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = p;
    p->next = NULL;
}
void printData(Node *head)
{
    cout<<"linked list : ";
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;  
    }cout<<endl;
}
class Solution 
{
    public : 
    Node *reverse(Node *&head)
    {
        Node *prev = NULL;
        Node *cur = head;
        Node *forward = NULL;
        if(head == NULL || head->next == NULL)
            return head;
        while(cur != NULL);
        {
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        return prev;
    }
        int SumOfLL(Node* first,Node* second)
        {
            first = reverse(first);
            second = reverse(second);
            printData(first);
            printData(second);
            return 1;
        }
};
int main()
{
    int n;
    cout<<"enter the number of nodes in the first linked list : ";cin>>n;
    int m;
    cout<<"enter the number of nodes in the second linked list : ";cin>>m;

    Node *first = NULL;
    Node *second = NULL;

    cout<<"enter the data in the first linked list : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a; 
        cout<<"enter the data : ";cin>>a;
        insert(first,a);
    }cout<<endl;
    cout<<"enter the data in the second linked list : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a; 
        cout<<"enter the data : ";cin>>a;
        insert(second,a);
    }cout<<endl;

    cout<<"printing the first linked list : ";
    printData(first);
    cout<<"printing second linked list : ";
    printData(second);
    Solution ob;
    int a = ob.SumOfLL(first,second);
    return 0;
}
