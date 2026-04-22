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
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Find Lowest Common Ancestor
struct Node* LCA(struct Node* root, int p, int q)
{
    if(root == NULL)
        return NULL;

    // If either p or q matches root
    if(root->data == p || root->data == q)
        return root;

    struct Node* left = LCA(root->left, p, q);
    struct Node* right = LCA(root->right, p, q);

    // If both sides return non-null → root is LCA
    if(left && right)
        return root;

    // Otherwise return non-null side
    return left ? left : right;
}

int main()
{
    // Build tree
    struct Node* root = createNode(3);
    root->left = createNode(5);
    root->right = createNode(1);
    root->left->left = createNode(6);
    root->left->right = createNode(2);
    root->right->left = createNode(0);
    root->right->right = createNode(8);

    int p = 5, q = 1;

    struct Node* ans = LCA(root, p, q);

    printf("Lowest Common Ancestor: %d\n", ans->data);

    return 0;
}