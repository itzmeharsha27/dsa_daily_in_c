#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
void serialize(struct Node* root);

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    serialize(root);

    return 0;
}

void serialize(struct Node* root)
{
    if(root == NULL)
    {
        printf("# ");
        return;
    }
}