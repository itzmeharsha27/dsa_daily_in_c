#include <iostream>
using namespace std;

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

    for(int i = 0; i < k; i++)
    {
        if(current == nullptr)
            return head;

        current = current->next;
    }

    current = head;

    for(int i = 0; i < k; i++)
    {
        Node* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    head->next = reverseKGroup(current, k);

    return previous;
}

int main()
{
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    head = reverseKGroup(head, k);

    return 0;
}