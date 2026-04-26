#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
int height(struct Node* root);
int isBalanced(struct Node* root);

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    return 0;
}

int isBalanced(struct Node* root)
{
    return 0;
}