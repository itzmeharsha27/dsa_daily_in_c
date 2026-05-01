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
    struct Trie* curr = root;

    for(int i=0; word[i]!='\0'; i++)
    {
        int index = word[i] - 'a';

        if(curr->children[index] == NULL)
            return 0;

        curr = curr->children[index];
    }

    return curr->isEnd;
}