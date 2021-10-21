#include <bits/stdc++.h>
using namespace std;

struct Node
{
	public:
	int data;
	Node *next;
};

void splitList(Node *head, Node **h1,
						Node **h2)
{
	Node *slow_ptr = head;
	Node *fast_ptr = head;
	
	if(head == NULL)
		return;
	
	while(fast_ptr->next != head &&
		fast_ptr->next->next != head)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
	}
	
	if(fast_ptr->next->next == head)
		fast_ptr = fast_ptr->next;
		
	*h1 = head;
		
	if(head->next != head)
		*h2 = slow_ptr->next;
		
	fast_ptr->next = slow_ptr->next;
		
	slow_ptr->next = head;
}

void push(Node **hr, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *hr;
	ptr1->data = data;
	ptr1->next = *hr;
		
	if(*hr != NULL)
	{
		while(temp->next != *hr)
		temp = temp->next;	
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1;
	
	*hr = ptr1;
}

void printList(Node *head)
{
	Node *temp = head;
	if(head != NULL)
	{
		cout << endl;
		do {
		cout << temp->data << " ";
		temp = temp->next;
		} while(temp != head);
	}
}

// Driver Code
int main()
{
	int size, i;
		
	Node *head = NULL;
	Node *head1 = NULL;
	Node *head2 = NULL;
	
	push(&head, 12);
	push(&head, 56);
	push(&head, 2);
	push(&head, 11);
	
	cout << "Original Circular Linked List";
	printList(head);	
	
	splitList(head, &head1, &head2);
	
	cout << "\nFirst Circular Linked List";
	printList(head1);
	
	cout << "\nSecond Circular Linked List";
	printList(head2);
	return 0;
}

