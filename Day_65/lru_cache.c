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

int main()
{
    return 0;
}