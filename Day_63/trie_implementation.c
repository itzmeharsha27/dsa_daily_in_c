#include <stdio.h>
#include <stdlib.h>

struct Trie
{
    struct Trie* children[26];
    int isEnd;
};

struct Trie* createNode();
void insert(struct Trie* root, char* word);
int search(struct Trie* root, char* word);

int main()
{
    struct Trie* root = createNode();

    insert(root, "cat");

    return 0;
}

int search(struct Trie* root, char* word)
{
    return 0;
}