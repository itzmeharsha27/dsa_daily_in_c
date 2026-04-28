#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *left, *right;
};

// Create node
struct Node* createNode(int val)
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

// Optimized check (returns -1 if unbalanced)
int checkHeight(struct Node* root)
{
    if(root == NULL)
        return 0;

    int lh = checkHeight(root->left);
    int rh = checkHeight(root->right);

    if(lh == -1 || rh == -1)
        return -1;

    if(lh - rh > 1 || rh - lh > 1)
        return -1;

    return (lh > rh ? lh : rh) + 1;
}

int main()
{
    // Example tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    if(checkHeight(root) == -1)
        printf("Not Balanced Binary Tree\n");
    else
        printf("Balanced Binary Tree\n");

    return 0;
}