#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
int maxPath(struct Node* root, int* maxSum);

int main()
{
    struct Node* root = createNode(10);
    root->left = createNode(2);
    root->right = createNode(10);

    return 0;
}

int maxPath(struct Node* root, int* maxSum)
{
    if(root == NULL)
        return 0;
}