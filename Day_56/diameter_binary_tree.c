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
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    return 0;
}

struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}