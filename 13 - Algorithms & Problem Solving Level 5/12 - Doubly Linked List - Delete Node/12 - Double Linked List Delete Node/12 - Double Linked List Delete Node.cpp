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

// Deletes a specific target node pointer from a Doubly Linked List
void DeleteNode(Node*& head, Node*& nodeToDelete)
{
    if (head == NULL || nodeToDelete == NULL) return;

    // If node to delete is head
    if (head == nodeToDelete)
    {
        head = nodeToDelete->next;
    }

    // Update next node's prev pointer if it exists
    if (nodeToDelete->next != NULL)
    {
        nodeToDelete->next->prev = nodeToDelete->prev;
    }

    // Update prev node's next pointer if it exists
    if (nodeToDelete->prev != NULL)
    {
        nodeToDelete->prev->next = nodeToDelete->next;
    }

    delete nodeToDelete;
    nodeToDelete = NULL;
}

// Deletes the first node (head)
void DeleteFirstNode(Node*& head)
{
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    delete temp;
}

// Deletes the last node (tail)
void DeleteLastNode(Node*& head)
{
    if (head == NULL) return;

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node* current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->prev->next = NULL;
    delete current;
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

    // Delete node 4 by pointer
    Node* target = Find(head, 4);
    if (target != NULL)
    {
        cout << "Deleting node 4 by pointer: ";
        DeleteNode(head, target);
        PrintList(head);
    }

    // Delete first node
    cout << "Deleting first node: ";
    DeleteFirstNode(head);
    PrintList(head);

    // Delete last node
    cout << "Deleting last node: ";
    DeleteLastNode(head);
    PrintList(head);

    return 0;
}