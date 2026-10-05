#include <iostream>
using namespace std;

// Singly Linked List Node
class Node
{
public:
    int value;
    Node* next;
};

// Inserts a new node at the end of the list
void InsertAtEnd(Node*& head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node* lastNode = head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = new_node;
}

// Deletes the first occurrence of a node with the specified value
void DeleteNode(Node*& head, int value)
{
    if (head == NULL) return;

    Node* current = head;
    Node* prev = head;

    // Case 1: Node to delete is the head node
    if (current->value == value)
    {
        head = current->next;
        delete current;
        return;
    }

    // Case 2: Node to delete is somewhere in the middle or end
    while (current != NULL && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    // Value not found in list
    if (current == NULL) return;

    // Unlink the node and free memory
    prev->next = current->next;
    delete current;
}

// Prints the linked list
void PrintList(Node* head)
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

    // Populate list
    for (int i = 1; i <= 6; i++)
    {
        InsertAtEnd(head, i);
    }

    cout << "Original List: ";
    PrintList(head);

    // Delete node with value 4
    cout << "Deleting node 4: ";
    DeleteNode(head, 4);
    PrintList(head);

    // Delete head node (value 1)
    cout << "Deleting head node 1: ";
    DeleteNode(head, 1);
    PrintList(head);

    return 0;
}