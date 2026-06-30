#include <stdio.h>
#include <stdlib.h>

// Trie (Prefix Tree)

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

    for(int i=0;i<ALPHABET;i++)
        node->child[i] = NULL;

    return node;
}

void insert(struct TrieNode *root, char word[])
{
    struct TrieNode *curr = root;

    for(int i=0; word[i]; i++)
    {
        int idx = word[i] - 'a';

        if(curr->child[idx] == NULL)
            curr->child[idx] = createNode();

        curr = curr->child[idx];
    }

    curr->isEnd = 1;
}

int search(struct TrieNode *root, char word[])
{
    struct TrieNode *curr = root;

    for(int i=0; word[i]; i++)
    {
        int idx = word[i] - 'a';

        if(curr->child[idx] == NULL)
            return 0;

        curr = curr->child[idx];
    }

    return curr->isEnd;
}

int main()
{
    struct TrieNode *root = createNode();

    insert(root, "cat");
    insert(root, "car");
    insert(root, "dog");

    printf("cat : %s\n", search(root, "cat") ? "Found" : "Not Found");
    printf("cow : %s\n", search(root, "cow") ? "Found" : "Not Found");
    printf("dog : %s\n", search(root, "dog") ? "Found" : "Not Found");

    return 0;
}