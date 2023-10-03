#include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *next;
        Node(int a)
        {
            data = a;
            this->next = NULL;
        }
};

void printData(Node *head)
{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL";
}

void insert(Node *&head,int data){
    Node *temp = new Node(data);
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    Node *p = head;
    while(p->next!=NULL)
        p = p->next;
    p->next = temp;
    temp->next = NULL;
}

int main()
{
    int n;
    cout<<"enter the number of nodes present in the linked list : ";cin>>n;

    Node *head = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the data : ";cin>>a;
        insert(head,a);
    }

    cout<<"printing the linked list : ";
    printData(head);
    return 0;
}
