#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
int checkHeight(struct Node* root);

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    return 0;
}

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