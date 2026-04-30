#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val);
void serialize(struct Node* root);
struct Node* deserialize(int arr[], int* index);

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    serialize(root);

    return 0;
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