#include <iostream>
using namespace std;

// Reorder Linked List
// Find Middle + Reverse Second Half + Merge

struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Find middle using slow and fast pointers
Node* findMiddle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Reverse a linked list
Node* reverseList(Node* head)
{
    Node* previous = nullptr;
    Node* current = head;

    while(current)
    {
        Node* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    return previous;
}

// Reorder the linked list
void reorderList(Node* head)
{
    if(!head || !head->next)
        return;

    // Step 1: Find middle
    Node* middle = findMiddle(head);

    // Step 2: Reverse second half
    Node* second = reverseList(middle->next);

    // Split the two halves
    middle->next = nullptr;

    Node* first = head;

    // Step 3: Merge alternately
    while(second)
    {
        Node* firstNext = first->next;
        Node* secondNext = second->next;

        first->next = second;
        second->next = firstNext;

        first = firstNext;
        second = secondNext;
    }
}

// Display linked list
void display(Node* head)
{
    while(head)
    {
        cout << head->data;

        if(head->next)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main()
{
    // Create linked list
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    reorderList(head);

    cout << "Reordered List: ";
    display(head);

    return 0;
}