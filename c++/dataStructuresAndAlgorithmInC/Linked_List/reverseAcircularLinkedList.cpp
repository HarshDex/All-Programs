#include <iostream>
using namespace std;
class node
{
    public:
    int data ;
    node *next;
    node (int a)
    {
        data = a ;
        next = NULL;
    }
};
void printData(node *head)
{
    int i= 1;
    while(head != NULL)
    {
        cout<<i<<" - element = "<<head->data<<endl;
        head = head->next;
        i++;
    }
}
void insert(node *&head ,int data)
{
    node* p = new node(data);
    if(head == NULL)
    {
        head = p;
    }
    else{
        node *q = head;
        while(q->next != head)
        {
            q= q->next;
        }
        q->next = p;
        p->next = q;
    }
}

int main()
{
    node *head  = NULL;
    int n;
    cout<<"enter the number of node"<<endl;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        int a ;
        cout<<"enter the "<<i+1<<" element =";
        cin>>a;
        insert(head,a);
    }
    cout<<"printing the singly linked list :"<<endl;
    printData(head);
    return 0;
}
