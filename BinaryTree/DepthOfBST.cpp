#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to find depth
int MaxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    int Lh = MaxDepth(root->left);
    int Rh = MaxDepth(root->right);
    return 1 + max(Lh, Rh);
}

int main()
{
    // Manually constructing the binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(6);
    root->right->left->left = new Node(5);

    cout << "Depth of BST is: " << MaxDepth(root) << endl;

    return 0;
}
