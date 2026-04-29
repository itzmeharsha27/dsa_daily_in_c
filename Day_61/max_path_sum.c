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
    root->left->left = createNode(20);
    root->left->right = createNode(1);

    return 0;
}

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