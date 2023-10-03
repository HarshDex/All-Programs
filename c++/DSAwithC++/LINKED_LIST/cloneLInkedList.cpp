#include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *next;
        Node *random;
        Node(int data){
            this->data = data;
            next = NULL;
            random = NULL;
        }
};
void printData(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL"<<endl;
}
Node* create(Node *head)
{
    
    if(head == NULL){
        Node *p = new Node(1);
        head = p;
    }
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    head->next->next = third;
    head->next->next->next = fourth;
    head->next->next->next->next = fifth;

    head->random = second;
    second->random = fourth;
    third->random = fifth;
    fourth->random = third;
    fifth->random =  head;
    return head;
}
int main()
{
    Node *head = NULL;
    head = create(head);
    printData(head);
    return 0;
}
