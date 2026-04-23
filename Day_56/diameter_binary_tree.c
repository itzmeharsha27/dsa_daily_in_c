#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
int height(struct Node* root);
int diameter(struct Node* root);

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    return 0;
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