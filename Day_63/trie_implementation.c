#include <stdio.h>
#include <stdlib.h>

struct Trie
{
    struct Trie* children[26];
    int isEnd;
};

struct Trie* createNode();
void insert(struct Trie* root, char* word);

int main()
{
    struct Trie* root = createNode();

    return 0;
}

void insert(struct Trie* root, char* word)
{
}