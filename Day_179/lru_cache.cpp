#include <iostream>
#include <unordered_map>
using namespace std;

// LRU Cache using Hash Map + Doubly Linked List

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

    // Gives O(1) access to a node
    unordered_map<int, Node*> cache;

    // Head = most recently used
    // Tail = least recently used
    Node* head;
    Node* tail;

    // Add node immediately after head
    void addNode(Node* node)
    {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // Remove a node from the list
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
        // Key does not exist
        if(cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];

        // Mark as recently used
        removeNode(node);
        addNode(node);

        return node->value;
    }

    void put(int key, int value)
    {
        // Key already exists
        if(cache.find(key) != cache.end())
        {
            Node* node = cache[key];

            removeNode(node);

            node->value = value;

            addNode(node);

            return;
        }

        // Create new node
        Node* node = new Node(key, value);

        cache[key] = node;
        addNode(node);

        // Remove least recently used node
        if(cache.size() > capacity)
        {
            Node* lru = tail->prev;

            removeNode(lru);

            cache.erase(lru->key);

            delete lru;
        }
    }
};

int main()
{
    LRUCache cache(2);

    cache.put(1, 1);
    cache.put(2, 2);

    cout << "get(1) = "
         << cache.get(1) << endl;

    cache.put(3, 3);

    cout << "get(2) = "
         << cache.get(2) << endl;

    cache.put(4, 4);

    cout << "get(1) = "
         << cache.get(1) << endl;

    cout << "get(3) = "
         << cache.get(3) << endl;

    cout << "get(4) = "
         << cache.get(4) << endl;

    return 0;
}