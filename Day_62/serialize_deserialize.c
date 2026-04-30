#include <stdio.h>
#include <stdlib.h>

// Serialize & Deserialize

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
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    serialize(root);

    return 0;
}