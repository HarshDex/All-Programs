#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
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
void display(node *head){
    if(head == NULL)    
        return ;
    display(head->next);
    printf("%d ",head->data);
}
void lis(node*&head,int a){
    node*n=new node(a);
    if(head==NULL){
        head=n;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp ->next = n;
}
int main()
{ 
    node* h1=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        lis(h1,a);
    }

    printData(h1);



    return 0;
}

