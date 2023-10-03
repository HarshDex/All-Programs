//check wether the linked list is palindrome or not 
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
bool check(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while(fast!=NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if(fast->next!=NULL)
            fast = fast->next;
    }
    slow->next = reverse(slow->next);
    fast = head;
    while(slow!= NULL)
    {
        if(slow->data != fast->data)
            return false;
    }
    return true;
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
    cout<<"enter the number of nodes : ";cin>>n;
    node *head = NULL;
    for(int i =0;i<n;i++)
    {
        int a;
        cout<<"enter the value of "<<i+1<<" node : ";
        cin>>a;
        insert(head,a);
    }cout<<endl;
    cout<<"printing the lineked list "<<endl;
    printData(head);

    if(check(head))
        cout<<"linked list is palindrome"<<endl;
    else
        cout<<"linked list is not palindrome"<<endl;
    return 0;
}
