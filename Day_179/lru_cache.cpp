#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int key;
    int value;
    Node* prev;
    Node* next;

    Node(int k, int v)
    {
        key = k;
        value = v;
        prev = nullptr;
        next = nullptr;
    }
};

int main()
{
    int capacity = 2;

    unordered_map<int, Node*> cache;

    Node* head = new Node(0, 0);
    Node* tail = new Node(0, 0);

    head->next = tail;
    tail->prev = head;

    return 0;
}