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

int main()
{
    return 0;
}

struct Node* createNode(int key, int value)
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->key = key;
    n->value = value;
    n->prev = n->next = NULL;
    return n;
}