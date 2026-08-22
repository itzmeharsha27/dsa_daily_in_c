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

class LRUCache
{
private:
    int capacity;

    unordered_map<int, Node*> cache;

    Node* head;
    Node* tail;

public:

    LRUCache(int cap)
    {
        capacity = cap;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }
};

int main()
{
    LRUCache cache(2);

    return 0;
}