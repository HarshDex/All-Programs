#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void printData(node* head)
{
    int i=1;
    while(head!=NULL)
    {
        cout<<i<<" - Element = "<<head->data<<endl;
        head=head->next;
        i++;
    }
}
void list(node *head,int data)
{
    node *n = new node (data);
        node *p = head;
        while(p != NULL)
        {
            p= p->next;
        }
        p->next = n;
}

int main()
{
    node *head ;
    head->data = 12;
    int n;
    cout<<"enter the number of nodes";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cout<<"enter the "<<i+1<<" - element"<<endl;
        cin>>a;
        list(head,a);
    }

    cout<<"list is succesfully created!!"<<endl;
    cout<<"printing the list"<<endl;
    printData(head);
    return 0;
}
