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

// Inserts a new node at the beginning of a Doubly Linked List
void InsertAtBeginning(Node*& head, int value)
{
    /*
        1. Create a new node.
        2. Set new node's next to head, prev to NULL.
        3. Update current head's prev to new node (if head is not NULL).
        4. Update head to point to new node.
    */
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

// Prints individual node details showing previous, current, and next values
void PrintNodeDetails(Node* node)
{
    if (node == NULL) return;

    if (node->prev != NULL)
        cout << node->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << node->value << " <--> ";

    if (node->next != NULL)
        cout << node->next->value << "\n";
    else
        cout << "NULL\n";
}

// Detailed print of all nodes in list
void PrintListDetails(Node* head)
{
    cout << "\nDetailed Node Connections:\n";
    while (head != NULL)
    {
        PrintNodeDetails(head);
        head = head->next;
    }
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
    PrintListDetails(head);

    return 0;
}