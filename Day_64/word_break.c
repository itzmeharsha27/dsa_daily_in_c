#include <stdio.h>
#include <stdlib.h>

// Trie Node
struct Trie
{
    struct Trie* children[26];
    int isEnd;
};

// Create node
struct Trie* createNode()
{
    struct Trie* node = (struct Trie*)malloc(sizeof(struct Trie));
    node->isEnd = 0;

    for(int i=0;i<26;i++)
        node->children[i] = NULL;

    return node;
}

// Insert word
void insert(struct Trie* root, char* word)
{
    struct Trie* curr = root;

    for(int i=0; word[i]!='\0'; i++)
    {
        int index = word[i] - 'a';

        if(curr->children[index] == NULL)
            curr->children[index] = createNode();

        curr = curr->children[index];
    }

    curr->isEnd = 1;
}

// Search word
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

// Check prefix
int startsWith(struct Trie* root, char* prefix)
{
    struct Trie* curr = root;

    for(int i=0; prefix[i]!='\0'; i++)
    {
        int index = prefix[i] - 'a';

        if(curr->children[index] == NULL)
            return 0;

        curr = curr->children[index];
    }

    return 1;
}

int main()
{
    struct Trie* root = createNode();

    insert(root, "apple");
    insert(root, "app");

    printf("Search apple: %d\n", search(root, "apple"));
    printf("Search app: %d\n", search(root, "app"));
    printf("Prefix ap: %d\n", startsWith(root, "ap"));

    return 0;
}