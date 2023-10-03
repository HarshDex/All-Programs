#include <bits/stdc++.h>
using namespace std;
class node
{   
    public: 
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void printData(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}
int findMid(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while(fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if(fast->next!=NULL)
            fast = fast->next;
    }
    return slow->data;
}
void insert(node *&head,int data)
{
    node *p = new node(data);
    if(head == NULL)
        head = p;
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->next = NULL;
}
int main()
{
    int n;
    cout<<"enter the number of node : ";cin>>n;
    node *head = NULL;
    for(int i=0;i<n;i++)
    {
        int a;
        cout<<"enter the value : ";cin>>a;
        insert(head,a);
    }

    printData(head);
    int d= findMid(head);
    cout<<"middle element of the linked list : "<<d;
    return 0;
}
