#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};
void printData(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL";
}
void insert(Node *&head,int data){
    Node *p = new Node(data);
    if(head == NULL)
        head = p;
    else{
        Node *temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = p;
        p->next = NULL;
    }
    
}
int main()
{   
    int  n;
    cout<<"enter the number of nodes present in the linked list : ";cin>>n;
    
    Node *head = NULL;
    for(int i  = 0;i<n;i++)
    {
        int a;
        cout<<"enter the element : ";cin>>a;
        insert(head,a);
    }    

    cout<<"printing the linked list : ";
    printData(head);

    return 0;
}
