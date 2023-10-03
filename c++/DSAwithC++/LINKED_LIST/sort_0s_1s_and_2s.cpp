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
void insertZero(node *&zeroTail)
{
    node *p = new node(0);
    zeroTail->next = p;
    p = zeroTail;
}
void insertOne(node *&oneTail)
{
    node *p = new node(1);
    oneTail->next = p;
    p = oneTail;
}
void inesertTwo(node *&twoTail)
{
    node *p = new node(0);
    twoTail->next = p;
    p = twoTail;
}
node *sorting(node *head)
{
    node *zero = new node(-1);
    node *zeroTail = zero;
    node *one = new node(-1);
    node *oneTail = one;
    node *second = new node(-1);
    node *secondTail = second;

    node *cur = head;
    while(cur != NULL)
    {
        int value = cur->data;
        if(value == 0)
            insertZero(zeroTail);
        else if(value == 1)
            insertOne(oneTail);
        else
            inesertTwo(secondTail);
    }

    zeroTail->next = oneTail->next;
    oneTail->next = second->next;

    return zero->next;
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
    head = sorting(head);
    printData(head);

    return 0;
}
