#include <bits/stdc++.h>
using namespace std;
class node 
{
    public : 
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
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}
void create(node*&head,int data)
{
    node *p = new node(data);

    if(head == NULL)
        head = p;
    else
    {
        node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->next = NULL;
      
    }
}
node *reverse(node *head,int k)
{
    if(head == NULL)
        return NULL;
    
    int count = 0;
    node *cur = head;
    node *prev = NULL;
    node *forward = NULL;
    while(cur != NULL && count < k)
    {
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
        count ++;
    }

    if(forward != NULL)
        head->next = reverse(forward,k);

    return prev;

}
int main()
{
    int n;
    cout<<"enter the number of nodes present in the linked list : ";cin>>n;

    node *head = NULL;
    for(int i =0;i<n;i++)
    {
        int a; 
        cout<<"enter the value : ";cin>>a;
       create(head,a);
    }

    cout<<"printing the linked list before reverse : ";
    printData(head);

    int k;
    cout<<"enter the group number : ";cin>>k;
    cout<<"printing the linked list after reversing group of "<<k<<" nodes : ";
    printData(reverse(head,k));

    return 0;
}
