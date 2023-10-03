#include <iostream>
using namespace std;
class node
{
    public:
        int data ;
        node *next ;
};
void printData(node *head)
{
    node *p= head;
    int i=1;
    do
    {
        cout<<i<<" - "<<p->data<<endl;
        p=p->next;
        i++;
    }while(p!=head);
}
int main()
{
    node *head,*second,*third;
    head = new node();
    second = new node ();
    third =  new node();
    head->data= 23;
    second->data= 45;
    third->data= 50;

    head->next= second;
    second->next= third;
    third->next=NULL;

    cout<<"data in the linked list is given below :\n\n"<<endl;
    printData(head);
    

    return 0;
}
