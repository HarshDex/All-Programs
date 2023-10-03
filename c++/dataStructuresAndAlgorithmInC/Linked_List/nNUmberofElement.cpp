#include <iostream>
using namespace std;
class node 
{
    public:
        int data ;
        node *next;
        node(int a)
        {
            data = a;
            next = NULL;
        }
};
void printData(node *head)
{
    int i=1;
    while(head !=NULL)
    {
        cout<<i<<" - Element is : "<<head->data<<endl;
        head = head ->next;
        i++;
    }
}
void assign(node *&head,int data)
{
    node *p = new node(data);
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        node * q = head;
        while(q->next!=NULL)
        {
            q = q->next;
        }
        q->next  = p ;
    }
}
int main()
{
    int n;
    cout<<"enter the number of nodes in the linked list : "<<endl;
    cin>>n;
    
    node *head = NULL;
    for(int i=0;i<n;i++)
    {
        int d;
        cout<<"enter the data which you want to enter in node "<<i+1<<" : ";
        cin>>d;
        assign(head,d);
    }

    cout<<"printing the linked list :"<<endl;;
    printData(head);
    cout<<"Thankyou!!"<<endl;;


    return 0;
}
