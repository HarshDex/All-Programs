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
node *reverse(struct node *&head)
{
    if(head == NULL || head->next == NULL)
        return head;
    

    node *rev = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rev;
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
