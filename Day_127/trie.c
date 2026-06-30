#include <stdio.h>
#include <stdlib.h>

#define ALPHABET 26

struct TrieNode
{
    struct TrieNode *child[ALPHABET];
    int isEnd;
};

int main()
{
    return 0;
}