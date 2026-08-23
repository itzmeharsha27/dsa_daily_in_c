#include <iostream>
using namespace std;

// Reverse Nodes in K-Group

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
    Node* current = head;
    Node* previous = nullptr;

    // Check whether k nodes are available
    for(int i = 0; i < k; i++)
    {
        if(current == nullptr)
            return head;

        current = current->next;
    }

    current = head;

    // Reverse k nodes
    for(int i = 0; i < k; i++)
    {
        Node* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    // Connect with next group
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
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    cout << "Original List: ";
    display(head);

    head = reverseKGroup(head, k);

    cout << "Reversed List: ";
    display(head);

    return 0;
}