#include <iostream>
using namespace std;

// Singly Linked List Node Structure
class Node
{
public:
	int value;
	Node* next;
};

int main()
{
	// 1. Declare Node Pointers
	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;
	Node* Node4 = NULL;

	// 2. Allocate Nodes on Heap Memory
	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();
	Node4 = new Node();

	// 3. Assign Values to Nodes
	Node1->value = 10;
	Node2->value = 20;
	Node3->value = 30;
	Node4->value = 40;

	// 4. Link Nodes Together
	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = Node4;
	Node4->next = NULL;

	// 5. Traverse and Print List
	Node* current = Node1;
	while (current != NULL)
	{
		cout << current->value << " -> ";
		current = current->next;
	}
	cout << "NULL" << endl;

	return 0;
}