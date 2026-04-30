#include <stdio.h>
#include <stdlib.h>

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

void serialize(struct Node* root)
{
    if(root == NULL)
    {
        printf("# ");
        return;
    }

    printf("%d ", root->data);
    serialize(root->left);
    serialize(root->right);
}

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->right->left = createNode(4);

    printf("Serialized: ");
    serialize(root);

    return 0;
}