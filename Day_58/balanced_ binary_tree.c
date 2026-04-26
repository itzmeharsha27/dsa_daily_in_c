#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    root->left->left = createNode(4);

    return 0;
}

int isBalanced(struct Node* root)
{
    if(root == NULL)
        return 1;

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}