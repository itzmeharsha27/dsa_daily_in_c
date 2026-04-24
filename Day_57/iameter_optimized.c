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

// Optimized diameter (O(n))
int diameterUtil(struct Node* root, int* height)
{
    if(root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int ld = diameterUtil(root->left, &lh);
    int rd = diameterUtil(root->right, &rh);

    *height = (lh > rh ? lh : rh) + 1;

    int curr = lh + rh + 1;

    if(curr > ld && curr > rd)
        return curr;
    else if(ld > rd)
        return ld;
    else
        return rd;
}

int main()
{
    // Build tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int height = 0;
    int diameter = diameterUtil(root, &height);

    printf("Optimized Diameter: %d\n", diameter);

    return 0;
}