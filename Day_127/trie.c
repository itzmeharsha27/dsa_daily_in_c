#include <stdio.h>
#include <stdlib.h>

#define ALPHABET 26

struct TrieNode
{
    struct TrieNode *child[ALPHABET];
    int isEnd;
};

struct TrieNode* createNode()
{
    struct TrieNode *node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    node->isEnd = 0;

    return node;
}

int main()
{
    return 0;
}