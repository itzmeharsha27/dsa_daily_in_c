#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *left, *right;
};

// Create node
struct Node* createNode(int val)
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}

// Serialize (preorder)
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

// Deserialize using array (-1 = NULL)
struct Node* deserialize(int arr[], int* index)
{
    if(arr[*index] == -1)
    {
        (*index)++;
        return NULL;
    }

    struct Node* root = createNode(arr[*index]);
    (*index)++;

    root->left = deserialize(arr, index);
    root->right = deserialize(arr, index);

    return root;
}

int main()
{
    // Example tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->right->left = createNode(4);
    root->right->right = createNode(5);

    printf("Serialized Tree: ");
    serialize(root);

    return 0;
}