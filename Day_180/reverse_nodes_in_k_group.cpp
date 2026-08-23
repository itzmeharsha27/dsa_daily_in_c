#include <iostream>
using namespace std;

// Reverse Nodes in K-Group
// LeetCode 25

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

Node* reverseKGroup(Node* head, int k)
{
    if(head == nullptr || k == 1)
        return head;

    Node* current = head;
    Node* previous = nullptr;

    // Check if at least k nodes exist
    for(int i = 0; i < k; i++)
    {
        if(current == nullptr)
            return head;

        current = current->next;
    }

    current = head;

    // Reverse exactly k nodes
    for(int i = 0; i < k; i++)
    {
        Node* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    // Original head is now the last node
    // of the reversed group
    head->next = reverseKGroup(current, k);

    return previous;
}

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

    int k = 2;

    cout << "Original List: ";
    display(head);

    head = reverseKGroup(head, k);

    cout << "After Reversing in K-Group: ";
    display(head);

    return 0;
}