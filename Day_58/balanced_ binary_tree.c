#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val)
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

int height(struct Node* root)
{
    if(root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return (l > r ? l : r) + 1;
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

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    if(isBalanced(root))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}