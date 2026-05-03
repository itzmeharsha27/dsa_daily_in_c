#include <stdio.h>
#include <stdlib.h>

// Node
struct Node
{
    int key, value;
    struct Node *prev, *next;
};

// Cache structure
struct LRU
{
    int capacity;
    struct Node *head, *tail;
};

int main()
{
    return 0;
}