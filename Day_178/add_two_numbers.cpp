#include <iostream>
using namespace std;

// Add Two Numbers using Linked List

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

Node* addTwoNumbers(Node* l1, Node* l2)
{
    Node* dummy = new Node(0);
    Node* current = dummy;

    int carry = 0;

    // Process both lists
    while(l1 || l2 || carry)
    {
        int sum = carry;

        if(l1)
        {
            sum += l1->data;
            l1 = l1->next;
        }

        if(l2)
        {
            sum += l2->data;
            l2 = l2->next;
        }

        // Store current digit
        current->next = new Node(sum % 10);
        current = current->next;

        // Calculate carry
        carry = sum / 10;
    }

    return dummy->next;
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
    // 342
    Node* l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    // 465
    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);

    cout << "List 1: ";
    display(l1);

    cout << "List 2: ";
    display(l2);

    // 342 + 465 = 807
    Node* result = addTwoNumbers(l1, l2);

    cout << "Sum: ";
    display(result);

    return 0;
}