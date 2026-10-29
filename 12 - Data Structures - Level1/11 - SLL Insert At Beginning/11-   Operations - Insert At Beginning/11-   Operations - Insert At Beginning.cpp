#include <iostream>
using namespace std;
class Node {
public:
	int value;
	Node* next;
};
void InsertAtBeginning(Node*& head, int value)
{
	// Allocate memory to a node
	Node* new_node = new Node();

	// insert the data
	new_node->value = value;
	new_node->next = head;

	// Move head to new node
	head = new_node;;
}

void PrintList(Node* head)

{
	while (head != NULL) {
		cout << head->value << " ";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;
	InsertAtBeginning(head, 100);
	InsertAtBeginning(head, 200);
	InsertAtBeginning(head, 300);
	InsertAtBeginning(head, 500);
	InsertAtBeginning(head, 1000);

	PrintList(head);
	system("pause>0");

}

