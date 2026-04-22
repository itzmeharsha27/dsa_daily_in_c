#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
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

int main()
{
    struct Node* root = createNode(3);
    root->left = createNode(5);
    root->right = createNode(1);

    int p = 5, q = 1;

    struct Node* ans = LCA(root, p, q);

    if(ans)
        printf("LCA = %d\n", ans->data);

    return 0;
}