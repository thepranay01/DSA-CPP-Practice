#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int isBalanced(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int lh = isBalanced(root->left);
    if (lh == -1)
    {
        return -1;
    }

    int rh = isBalanced(root->right);
    if (rh == -1)
    {
        return -1;
    }

    if (abs(lh - rh) > 1)
        return -1;

    return 1 + max(lh, rh);
}

int main()
{
    // TestCase 1:
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->left = NULL;
    root->right->right = NULL;
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);

    // TestCase 2:
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);
    // root->right->left = new TreeNode(15);
    // root->right->right = new TreeNode(7);

    if (isBalanced(root) == -1)
    {
        cout << "The binary tree is not balanced." << endl;
    }
    else
    {
        cout << "The binary tree is balanced." << endl;
    }
    return 0;
}