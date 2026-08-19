#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* removeNthFromEnd(Node* head, int n)
{
    Node* dummy = new Node{0, head};

    Node* fast = dummy;
    Node* slow = dummy;

    for(int i = 0; i < n; i++)
        fast = fast->next;

    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return dummy->next;
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