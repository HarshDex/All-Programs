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
void delf(struct node *&head)
{
    struct node *p = head;
    p = p->next;
    delete head;
    p = head;
}
void deli(struct node *&head,int key)
{
    struct node *f = head->next;
    struct node*s = head;
    while(f != NULL)
    {
        if(f->data = key)
        {
            s->next = f->next;
            delete f;
        }
        f = f->next;
        s = s->next;
    }
}
void dele(struct node*& head)
{
    struct node *f = head->next;
    struct node *s = head;
    while(f != NULL)
    {
        f = f->next;
    }
    s->next = NULL;
    delete f;
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
    int loop = 1;
    node *head = NULL;
    while(loop == 1)
    {
        int c;
        cout<<"press[1] if you want to insert"<<endl<<"press[2] if you want to delete element"<<endl<<"press[3] if you want to print the liked list "<<endl;
        cin>>c;
        if(c == 1)
        {
            int n;
            cout<<"enter the number of node you want to insert : ";cin>>n;
            for(int i =0;i<n;i++)
            {
                int a;
                cout<<"enter the value of "<<i+1<<" node : ";
                cin>>a;
                insert(head,a);
            }
        }
        else if(c == 2)
        {
            cout<<"press[1] if you want to delete from the front"<<endl<<"press[2] if you want to delete from the last"<<endl<<"press[3] if you want to delete in an particular data"<<endl;
            int del;
            cin>>del;
            if(del == 1)
                delf(head);
            else if(del == 2)
                dele(head);
            else if(del == 3)
            {
                int value;
                cout<<"enter the particular value which you want to delete :  ";cin>>value;
                deli(head,value);
            }
        }
        else if(c == 3)
        {
            cout<<"printing the linked list : "<<endl;
            printData(head);
        }
        cout<<"press[1] to continue or press[0] to exit";
        cin>>loop;
        cout<<endl;
    }


    return 0;
}
