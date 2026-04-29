#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);

int main()
{
    struct Node* root = createNode(10);
    root->left = createNode(2);
    root->right = createNode(10);

    return 0;
}

struct Node* createNode(int val)
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}