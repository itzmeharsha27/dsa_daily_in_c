#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

// Maximum path sum logic
int maxPath(struct Node* root, int* maxSum)
{
    if(root == NULL)
        return 0;

    int left = maxPath(root->left, maxSum);
    int right = maxPath(root->right, maxSum);

    if(left < 0) left = 0;
    if(right < 0) right = 0;

    int curr = left + right + root->data;

    if(curr > *maxSum)
        *maxSum = curr;

    return root->data + (left > right ? left : right);
}

int main()
{
    // Example tree
    struct Node* root = createNode(-10);
    root->left = createNode(9);
    root->right = createNode(20);
    root->right->left = createNode(15);
    root->right->right = createNode(7);

    int maxSum = INT_MIN;

    maxPath(root, &maxSum);

    printf("Maximum Path Sum: %d\n", maxSum);

    return 0;
}