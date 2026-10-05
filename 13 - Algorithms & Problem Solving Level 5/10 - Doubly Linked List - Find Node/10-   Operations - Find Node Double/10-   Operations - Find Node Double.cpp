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

// Searches for a node by value in a Doubly Linked List
Node* Find(Node* head, int value)
{
    while (head != NULL)
    {
        if (head->value == value) // Corrected comparison operator
            return head;
        head = head->next;
    }
    return NULL;
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

    cout << "Doubly Linked List Content:\n";
    PrintList(head);

    // Search for value 2
    int target = 2;
    Node* foundNode = Find(head, target);

    if (foundNode != NULL)
        cout << "\nNode with value " << target << " found at address: " << foundNode << endl;
    else
        cout << "\nNode with value " << target << " not found!" << endl;

    return 0;
}