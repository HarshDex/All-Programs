#include <iostream>
using namespace std;
class node
{
    public:
    int data ;
    node *pre;
    node *next;
    node (int a)
    {
        data = a ;
        pre = NULL;
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
        

        while(q->next != NULL)
        {
            q= q->next;
        }
        q->pre = 
        q->next = p;
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
    cout<<"\nprinting the singly linked list :\n"<<endl;
    printData(head);
    return 0;
}
