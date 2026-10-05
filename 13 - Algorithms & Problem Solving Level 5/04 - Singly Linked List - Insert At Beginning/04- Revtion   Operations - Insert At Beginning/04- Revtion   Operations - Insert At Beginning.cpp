#include <iostream>
using namespace std;

// Singly Linked List Node
class Node
{
public:
	int value;
	Node* next;
};

// Inserts a new node at the beginning (head) of the linked list
void InsertAtBeginning(Node*& head, int value)
{
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = head; // Point new node to current head
	head = new_node;       // Update head pointer to new node
}

// Prints all elements in the linked list
void Print(Node* head)
{
	while (head != NULL)
	{
		cout << head->value << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	Node* head = NULL;

	// Insert elements at the beginning
	InsertAtBeginning(head, 1);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 5);

	cout << "Linked List after inserting elements at beginning:" << endl;
	Print(head);

	return 0;
}
