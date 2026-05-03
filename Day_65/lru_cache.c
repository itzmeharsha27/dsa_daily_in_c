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

void put(struct LRU* cache, int key, int value);

int main()
{
    return 0;
}

void put(struct LRU* cache, int key, int value)
{
}