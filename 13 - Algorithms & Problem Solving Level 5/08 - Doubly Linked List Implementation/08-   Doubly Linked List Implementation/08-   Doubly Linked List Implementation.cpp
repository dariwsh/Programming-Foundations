#include <iostream>
using namespace std;

// Doubly Linked List Node Structure (contains value, next, and prev pointers)
class Node
{
public:
	int value;
	Node* next;
	Node* prev;
};

int main()
{
	// 1. Declare node pointers
	Node* head = NULL;
	Node* Node1 = new Node();
	Node* Node2 = new Node();
	Node* Node3 = new Node();

	// 2. Assign values
	Node1->value = 1;
	Node2->value = 2;
	Node3->value = 3;

	// 3. Setup bidirectional links
	Node1->next = Node2;
	Node1->prev = NULL;

	Node2->next = Node3;
	Node2->prev = Node1;

	Node3->next = NULL;
	Node3->prev = Node2;

	head = Node1;

	// 4. Forward Traversal
	cout << "Doubly Linked List Forward: NULL <--> ";
	Node* current = head;
	while (current != NULL)
	{
		cout << current->value << " <--> ";
		current = current->next;
	}
	cout << "NULL" << endl;

	return 0;
}
