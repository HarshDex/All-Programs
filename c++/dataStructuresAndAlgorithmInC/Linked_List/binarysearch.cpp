#include <iostream>
using namespace std;
class Node 
{
    public:
        int data ;
        Node *next;
        Node(int a)
        {
            data = a;
            next = NULL;
        }
};
void printData(Node *head)
{
    int i=1;
    while(head !=NULL)
    {
        cout<<i<<" - Element is : "<<head->data<<endl;
        head = head ->next;
        i++;
    }
}
struct Node *create(struct Node *head,int data){
	Node *p = new Node(data);
	if(head == NULL)
		return p;
	Node *temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = p;
	p->next = NULL;
	return head;
}

Node* middle(Node* start, Node* last)
{
	if (start == NULL)
		return NULL;

	Node* slow = start;
	Node* fast = start -> next;

	while (fast != last)
	{
		fast = fast -> next;
		if (fast != last)
		{
			slow = slow -> next;
			fast = fast -> next;
		}
	}
	return slow;
}


Node* binarySearch(Node *head, int value)
{
	Node* start = head;
	Node* last = NULL;

	do
	{
		Node* mid = middle(start, last);

		if (mid == NULL)
			return NULL;

		if (mid -> data == value)
			return mid;

		else if (mid -> data < value)
			start = mid -> next;

		else
			last = mid;

	} while (last == NULL ||
			last != start);
    return NULL;
}

int main()
{
	int n;
	cout<<"enter the number of nodes prensent in the linked list : ";cin>>n;

	Node *head = NULL;
	for(int i =0;i<n;i++);
	{
		int a;
		printf("enter the value : ");
		cin>>a;
		head = create(head,a);
	}
	printData(head);
	cout<<endl;
	int s;
	cout<<"enter the element you want to search : ";cin>>s;
	binarySearch(head,s);
}
