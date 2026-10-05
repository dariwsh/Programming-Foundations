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

// Deletes the first node (head) of the linked list
void DeleteFirstNode(Node*& head)
{
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Deletes the last node of the linked list
void DeleteLastNode(Node*& head)
{
    if (head == NULL) return;

    // Single node case
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node* current = head;
    Node* prev = head;

    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
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

    for (int i = 1; i <= 6; i++)
    {
        InsertAtEnd(head, i);
    }

    cout << "Original List: ";
    PrintList(head);

    cout << "After DeleteFirstNode: ";
    DeleteFirstNode(head);
    PrintList(head);

    cout << "After DeleteLastNode: ";
    DeleteLastNode(head);
    PrintList(head);

    return 0;
}