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

void solve(node *&h1,node *&h2)
{
    node *cur1 = h1;
    node *cur2 = h2;
    node *next1 = h1->next;
    node *next2 = h2->next;

    while(next1!=NULL && next2 != NULL)
    {
        if(cur1->data <= cur2->data && next1->data >= cur2->data)
        {
            cur1->next = cur2;
            next2 = cur2->next;
            cur2->next = next1;

            cur1 = cur2;
            cur2 = next2;
        }
        else
        {
            cur1 = next1;
            next1 = next1->next;
            if(next1 == NULL)
            {
                cur1->next = cur2;
            }
        }
    }
}
node *merge(node *h1,node *h2)
{
    if(h1 == NULL)
        return h2;
    if(h2 == NULL)
        return h1;
    if(h1->data <= h2->data)
        solve(h1,h2);
    else
        solve(h2,h1);
   return h1;
}
int main()
{
    cout<<"PLEASE NOTE THAT THE LINKED LIST MUST BE IN SORTED ORDER "<<endl;
    int n1;
    cout<<"enter the number of nodes in first linked list : ";cin>>n1;
    node *head1 = NULL;
    for(int i =0;i<n1;i++)
    {
        int a;
        cout<<"enter the value of "<<i+1<<" node : ";
        cin>>a;
        insert(head1,a);
    }cout<<endl;
    
    int n2;
    cout<<"enter the number of nodes second linked list : ";cin>>n2;
    node *head2 = NULL;
    for(int i =0;i<n2;i++)
    {
        int a;
        cout<<"enter the value of "<<i+1<<" node : ";
        cin>>a;
        insert(head2,a);
    }cout<<endl;

    cout<<"first lineked list : "<<endl;
    printData(head1);
    cout<<"second lineked list : "<<endl;
    printData(head2);

    cout<<"linked list after merge : ";
    printData(merge(head1,head2));
    return 0;
}
