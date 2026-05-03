#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key, value;
    struct Node *prev, *next;
};

struct LRU
{
    int capacity;
    struct Node *head, *tail;
};

struct Node* createNode(int key, int value);
void insertFront(struct LRU* cache, struct Node* node);

int main()
{
    return 0;
}

void insertFront(struct LRU* cache, struct Node* node)
{
    node->next = cache->head;
    node->prev = NULL;

    if(cache->head)
        cache->head->prev = node;

    cache->head = node;

    if(cache->tail == NULL)
        cache->tail = node;
}