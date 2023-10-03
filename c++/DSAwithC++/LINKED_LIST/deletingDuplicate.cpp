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
node *del(node *&head,unordered_map<int,bool> &visited)
{
    if(head == NULL || head->next == NULL) 
        return head;
    node *cur = head;
    // m[cur->data] = true;
    while(cur != NULL)
    {
        // auto it = visited.find(cur->data);
        // if(it != visited.end())
        // {
        //     visited[cur->data] = true;
        // }
        visited[cur->data] = true;
        if((cur->next != NULL) && visited[cur->data] == false)
        {
            node *nex = cur->next->next;
            node *del = cur->next;
            delete(nex);
            cur->next = nex;
        }
        cur= cur->next;
    }
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
    unordered_map<int,bool> visited;
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
    cout<<"printint the data of the linked list : "<<endl;
    printData(head);
    cout<<"printing the lineked list after removing duplicate element:  "<<endl;
    head = del(head,visited);
    printData(head);
    return 0;
}
