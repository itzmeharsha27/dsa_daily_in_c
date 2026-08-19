#include <iostream>
using namespace std;

// Remove Nth Node From End of Linked List
// Using Two Pointer Technique

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

// Remove nth node from the end
Node* removeNthFromEnd(Node* head, int n)
{
    // Dummy node handles removal of head
    Node* dummy = new Node(0);
    dummy->next = head;

    Node* fast = dummy;
    Node* slow = dummy;

    // Move fast pointer n steps ahead
    for(int i = 0; i < n; i++)
        fast = fast->next;

    // Move both pointers until fast reaches last node
    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    // slow is now before the target node
    slow->next = slow->next->next;

    return dummy->next;
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

    int n = 2;

    cout << "Original List: ";
    display(head);

    // Remove nth node from end
    head = removeNthFromEnd(head, n);

    cout << "After Removal: ";
    display(head);

    return 0;
}