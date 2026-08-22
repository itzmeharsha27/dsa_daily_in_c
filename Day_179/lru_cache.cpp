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

    void addNode(Node* node)
    {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    void removeNode(Node* node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

public:

    LRUCache(int cap)
    {
        capacity = cap;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if(cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];

        removeNode(node);
        addNode(node);

        return node->value;
    }
};

int main()
{
    LRUCache cache(2);

    return 0;
}