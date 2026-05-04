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
    int count;
    struct Node *head, *tail;
    struct Node* map[SIZE];
};

void insertFront(struct LRU* cache, struct Node* node);
void removeNode(struct LRU* cache, struct Node* node);

void put(struct LRU* cache, int key, int value)
{
    if(cache->map[key])
    {
        struct Node* node = cache->map[key];
        node->value = value;

        removeNode(cache, node);
        insertFront(cache, node);
    }
    else
    {
        struct Node* node = createNode(key, value);

        if(cache->count == cache->capacity)
        {
            cache->map[cache->tail->key] = NULL;
            removeNode(cache,      cache->tail);
            cache->count--;
        }

        insertFront(cache, node);
        cache->map[key] = node;
        cache->count++;
    }
}