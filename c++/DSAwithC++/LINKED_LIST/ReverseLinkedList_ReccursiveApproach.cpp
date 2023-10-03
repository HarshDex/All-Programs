//recursive approach of reverisng the linked list : 
// iterative approach
#include <bits/stdc++.h>
using namespace std;
struct node
{   
    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void printData(struct node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}
void reversed(node *&head,node *cur,node *prev)
{
    if(cur == NULL)
    {
        head = prev;
        return;
    }
    reversed(head,cur->next,cur);
    cur->next = prev;
}
node *reverse(node *&head)
{
    node *cur = head;
    node *prev = NULL;
    reversed(head,cur,prev);
    return head;
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
        p->next = NULL;
    }
}
int main()
{
    int n;
    cout<<"enter the number of nodes : "<<endl;
    cin>>n;
    struct node*head = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the value of the node : ";cin>>a;
        insert(head,a);
    }
    cout<<"printing the lineked list "<<endl;
    printData(head);
    cout<<endl;

    cout<<"printing the reverse of the linked list : "<<endl;
    head = reverse(head);
    printData(head);
    return 0;
}
