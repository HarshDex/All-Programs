//add two number represented by linked list 
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
int number(node *head)
{
    vector<int> ans;
    node *temp = head;
    while(temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    int l = ans.size();
    int sum = 0;
    int p = 0;
    for(int i =l-1;i>=0;i--)
    {
        sum = sum + ans[i]*pow(10,p);
        // cout<<sum<<endl;
        p++;
    }
    return sum+1;
}

int addLL(node *head1,node *head2)
{
    int h1 = number(head1);
    int h2 = number(head2);
    return h1+h2;
}
int main()
{
    cout<<"PLEASE NOTE THAT THE LINKED LIST MUST BE IN SORTED ORDER "<<endl;
    int n1;
    cout<<"enter the number of nodes in first linked list : ";cin>>n1;
    node *head1 = NULL;
    for(int i =0;i<n1;i++)
    {
        int a;
        cout<<"enter the value of "<<i+1<<" node : ";
        cin>>a;
        insert(head1,a);
    }cout<<endl;
    
    int n2;
    cout<<"enter the number of nodes second linked list : ";cin>>n2;
    node *head2 = NULL;
    for(int i =0;i<n2;i++)
    {
        int a;
        cout<<"enter the value of "<<i+1<<" node : ";
        cin>>a;
        insert(head2,a);
    }cout<<endl;

    cout<<"first lineked list : "<<endl;
    printData(head1);
    cout<<"second lineked list : "<<endl;
    printData(head2);

    cout<<"the sum of the two linked list : "<<addLL(head1,head2)<<endl;

    
}
