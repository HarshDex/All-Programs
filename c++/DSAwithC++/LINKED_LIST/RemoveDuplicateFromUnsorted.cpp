//remove all the duplicate elements from the linked list : 
#include <bits/stdc++.h>
using namespace std;
struct node
{   
    int data;
    struct node *next;
    node(){}
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
    }
    cout<<"printing the lineked list "<<endl;
    printData(head);
    cout<<"deleting the duplicate elements from the linked list : "<<endl;
    
    return 0;
}
