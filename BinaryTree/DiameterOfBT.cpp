// Longest path between two nodes
/*
       1
      / \
     2   3
        / \
       4   7
      /     \
     5       8
    /         \
   6           9

*/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(TreeNode *root, int &diameter)
{

    if (root == NULL) return 0;

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);

    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int diameter = 0;
    height(root, diameter);
    return diameter;
}


int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(7);

    root->right->left->left = new TreeNode(5);
    root->right->right->right = new TreeNode(8);

    root->right->left->left->left = new TreeNode(6);
    root->right->right->right->right = new TreeNode(9);

    cout << "Diameter is : " << diameterOfBinaryTree(root);

    return 0;
}