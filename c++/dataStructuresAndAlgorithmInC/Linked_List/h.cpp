#include<iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* getNode(int data)
{
	// allocate memory for node
	Node* newNode = new Node;

	// put in the data
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Function to reverse the circular linked list
void reverse(Node** head_ref)
{
	// if list is empty
	if (*head_ref == NULL)
		return;

	// reverse procedure same as reversing a
	// singly linked list
	Node* prev = NULL;
	Node* current = *head_ref;
	Node* next;
	do {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	} while (current != (*head_ref));

	// adjusting the links so as to make the
	// last node point to the first node
	(*head_ref)->next = prev;
	*head_ref = prev;
}

// Function to print circular linked list
void printList(Node* head)
{
	if (head == NULL)
		return;

	Node* temp = head;
	do {
		cout << temp->data << " ";
		temp = temp->next;
	} while (temp != head);
}

// Driver program to test above
int main()
{
	// Create a circular linked list
	// 1->2->3->4->1
	Node* head = getNode(1);
	head->next = getNode(2);
	head->next->next = getNode(3);
	head->next->next->next = getNode(4);
	head->next->next->next->next = head;

	cout << "Given circular linked list: ";
	printList(head);

	reverse(&head);

	cout << "\nReversed circular linked list: ";
	printList(head);

	return 0;
}
