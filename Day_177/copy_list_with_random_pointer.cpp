#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* random;

    Node(int value)
    {
        data = value;
        next = nullptr;
        random = nullptr;
    }
};

Node* copyRandomList(Node* head)
{
    if(head == nullptr)
        return nullptr;

    unordered_map<Node*, Node*> mp;

    Node* current = head;

    while(current)
    {
        mp[current] = new Node(current->data);
        current = current->next;
    }

    return mp[head];
}

int main()
{
    Node* head = new Node(7);

    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    Node* copy = copyRandomList(head);

    return 0;
}