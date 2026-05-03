#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

struct Node
{
    int key, value;
    struct Node *prev, *next;
};

struct LRU
{
    int capacity;
    struct Node *head, *tail;
    struct Node* map[SIZE];
};

int get(struct LRU* cache, int key);

int main()
{
    return 0;
}

int get(struct LRU* cache, int key)
{
    if(cache->map[key] == NULL)
        return -1;

    struct Node* node = cache->map[key];

    removeNode(cache, node);
    insertFront(cache, node);

    return node->value;
}