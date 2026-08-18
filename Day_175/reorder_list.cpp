#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

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

int main()
{
    Node* head = new Node{1, nullptr};

    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    Node* middle = findMiddle(head);

    Node* secondHalf = reverseList(middle->next);

    return 0;
}