#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertl(struct node *&head,int data)
{
    struct node * temp = head;
    struct node *l = new node(data);
    if(head == NULL)
        head = l;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = l; 
    l->next = head;
}
void printData(struct node *head)
{
    struct node *p = head;
    do
    {
        cout<<p->data<<" ";
        p= p->next;
    } while(p != head);
    
}
void insert(struct node*&head,int data)
{
    struct node *p = new node(data);

    if(head == NULL)
        head = p;
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}


int main()
{
    int n;
    cout<<"enter the number of nodes present in the list : ";cin>>n;
    struct node *head= NULL;
    for(int i =0;i<n-1;i++)
    {
        int a;
        cout<<"enter the value of the node : ";cin>>a;
        insert(head,a);
    }
    int l;
    cout<<"enter the value of the node : ";cin>>l;
    insertl(head,l);

    cout<<"printing the circular linked list : "<<endl;
    printData(head);
}
