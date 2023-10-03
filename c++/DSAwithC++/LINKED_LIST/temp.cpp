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
int main()
{
    int n;
    cout<<"enter the number of nodes in the first linked list : ";cin>>n;
   
    Node *first = NULL;

    cout<<"enter the data in the first linked list : "<<endl;
    for(int i =0;i<n;i++)
    {
        int a; 
        cout<<"enter the data : ";cin>>a;
        insert(first,a);
    }cout<<endl;
   

    cout<<"printing the first linked list : ";
    printData(first);

    first = reverse(first);
    printData(first);
}
