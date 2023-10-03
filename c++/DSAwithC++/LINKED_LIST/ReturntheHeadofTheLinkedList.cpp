// check whether loop is present or not 
#include <bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
    }
};

void printData(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

node *isloop(node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    node *fast = head;
    node *slow = head;
    while(fast != NULL)
    {
        fast = fast->next;
        if(fast->next != NULL)
            fast = fast->next;
        slow = slow->next;
        if(slow == fast)
            return slow;
    }
    return NULL;
}
node *find(node *head)
{
    if(head == NULL)
        return NULL;
    node *intersection = isloop(head);
    if(intersection == NULL)
        return NULL;
    node *slow = head;
    while(slow != intersection)
    {
        intersection = intersection->next;
        slow = slow->next;
        if(intersection == slow)
            return slow;            
    }
    return NULL;
}

void removeLoop(node *head)
{
    if(head == NULL)
        return ;
    node *start = find(head);
    node *temp = start;
    while(temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    node *head = new node(1);
    node *h1 = new node(2);
    node *h2 = new node(3);
    node *h3 = new node(4);
    node *h4 = new node(5);
    node *h5 = new node(6);

    node *temp = NULL;
    head->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = h2;

    node *start = find(head);
    cout<<"loop starts at :"<<start->data<<endl;

    cout<<"removing the loop "<<endl;
    removeLoop(head);
    printData(head);
    return 0;
}
