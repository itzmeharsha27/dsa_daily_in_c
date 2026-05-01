#include <stdio.h>
#include <stdlib.h>

struct Trie
{
    struct Trie* children[26];
    int isEnd;
};

struct Trie* createNode();

int main()
{
    return 0;
}

struct Trie* createNode()
{
    struct Trie* node = (struct Trie*)malloc(sizeof(struct Trie));
    node->isEnd = 0;

    for(int i=0;i<26;i++)
        node->children[i] = NULL;

    return node;
}