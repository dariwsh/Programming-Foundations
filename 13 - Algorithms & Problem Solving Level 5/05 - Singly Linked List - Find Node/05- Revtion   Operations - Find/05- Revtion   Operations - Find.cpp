#include <iostream>
using namespace std;

// Singly Linked List Node
class Node
{
public:
    int value;
    Node* next;
};

// Inserts a node at the beginning of the list
void InsertAtBeginning(Node*& head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    head = new_node;
}

// Searches for a node with the given value and returns a pointer to it
Node* Find(Node* head, int value)
{
    while (head != NULL)
    {
        if (head->value == value)
            return head;
        head = head->next;
    }
    return NULL;
}

// Inserts a new node after a given node pointer
void InsertAfter(Node* prev_node, int value)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

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

// Prints the elements of the linked list
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

    // Test Insert At Beginning
    InsertAtBeginning(head, 30);
    InsertAtBeginning(head, 20);
    InsertAtBeginning(head, 10);

    cout << "Initial List: ";
    PrintList(head);

    // Test Find and InsertAfter
    Node* foundNode = Find(head, 20);
    if (foundNode != NULL)
    {
        cout << "Node with value 20 found! Inserting 25 after it..." << endl;
        InsertAfter(foundNode, 25);
    }
    PrintList(head);

    // Test InsertAtEnd
    cout << "Inserting 40 at end:" << endl;
    InsertAtEnd(head, 40);
    PrintList(head);

    return 0;
}