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
node *reverse(node *&head,int k)
{
    if(head == NULL)
        return NULL;
    
    int count = 0;
    node *prev = NULL;
    node *cur = head;
    node *nex = NULL;
    while(cur != NULL && count< k)
    {
        nex = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nex;
        count ++;
    }
    if(nex!=NULL)
        head->next=reverse(nex,k);
    head = prev;
    return head;
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

    int k;
    cout<<"enter the cardinality of group upto which you want to reverse : ";cin>>k;
    head = reverse(head,k);
    printData(head);
    return 0;
}
