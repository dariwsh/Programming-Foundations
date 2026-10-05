#include <iostream>
using namespace std;

// Doubly Linked List Node Structure
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};

// Inserts node at beginning
void InsertAtBeginning(Node*& head, int value)
{
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}

// Searches for a node by value
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

// Inserts a new node immediately after a specified target node
void InsertAfter(Node* current, int value)
{
    if (current == NULL)
    {
        cout << "Current node cannot be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next != NULL)
    {
        current->next->prev = new_node;
    }
    current->next = new_node;
}

// Inserts a new node at the end of a Doubly Linked List
void InsertAtEnd(Node*& head, int value)
{
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

// Prints simple list contents
void PrintList(Node* head)
{
    cout << "NULL <--> ";
    while (head != NULL)
    {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "Original List: ";
    PrintList(head);

    // Find node with value 2 and insert 250 after it
    Node* targetNode = Find(head, 2);
    if (targetNode != NULL)
    {
        cout << "Inserting 250 after node 2:" << endl;
        InsertAfter(targetNode, 250);
        PrintList(head);
    }

    // Insert at end
    cout << "Inserting 99 at end:" << endl;
    InsertAtEnd(head, 99);
    PrintList(head);

    return 0;
}