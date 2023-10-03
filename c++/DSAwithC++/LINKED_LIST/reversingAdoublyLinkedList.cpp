#include <bits/stdc++.h>
using namespace std;
class node
{   
    public: 
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
void printRev(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->prev;
    }cout<<endl;
}
void printData(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
    cout<<"printing linked list in reverse : "<<endl;
    printRev(head);
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
    p->prev = temp;
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
    return 0;
}
