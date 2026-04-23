#include <stdio.h>
#include <stdlib.h>

// Diameter of binary tree

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

int height(struct Node* root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return (left > right ? left : right) + 1;
}

int diameter(struct Node* root)
{
    if(root == NULL)
        return 0;

    int leftH = height(root->left);
    int rightH = height(root->right);

    int leftD = diameter(root->left);
    int rightD = diameter(root->right);

    int curr = leftH + rightH + 1;

    if(curr > leftD && curr > rightD)
        return curr;
    else if(leftD > rightD)
        return leftD;
    else
        return rightD;
}

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    return 0;
}