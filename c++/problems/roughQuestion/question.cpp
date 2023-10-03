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

bool check(node *head)
{
    if(head == NULL || head->next == NULL)
        return true;
    node* slow = head;
    node* fast = head;
    while(fast != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}
int main()
{
    node *head = new node(1);
    node *h1 = new node(2);
    node *h2 = new node(3);
    node *h3 = new node(4);
    node *h4 = new node(5);

    node *temp = NULL;
    head->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h2;
    
    if(check(head))
        cout<<"loop is present"<<endl;
    else
        cout<<"loop is not present"<<endl;

    if(check(temp))
        cout<<"temp also have loop"<<endl;
    return 0;
}
