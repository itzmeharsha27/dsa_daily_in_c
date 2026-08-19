#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* removeNthFromEnd(Node* head, int n)
{
    Node* fast = head;
    Node* slow = head;

    return head;
}

int main()
{
    Node* head = new Node{1, nullptr};

    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    head->next->next->next->next = new Node{5, nullptr};

    int n = 2;

    head = removeNthFromEnd(head, n);

    return 0;
}