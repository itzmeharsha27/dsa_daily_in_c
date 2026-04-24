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
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    int h = 0;
    int d = diameterUtil(root, &h);

    printf("Diameter = %d\n", d);

    return 0;
}