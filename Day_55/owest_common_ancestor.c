#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
struct Node* LCA(struct Node* root, int p, int q);

int main()
{
    struct Node* root = createNode(3);
    root->left = createNode(5);
    root->right = createNode(1);

    return 0;
}

struct Node* LCA(struct Node* root, int p, int q)
{
    if(root == NULL)
        return NULL;

    if(root->data == p || root->data == q)
        return root;

    struct Node* left = LCA(root->left, p, q);
    struct Node* right = LCA(root->right, p, q);

    if(left && right)
        return root;

    return left ? left : right;
}