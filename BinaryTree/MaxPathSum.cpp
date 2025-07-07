#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

int MaxPathDown(TreeNode *root, int &maxi)
{

    if (!root)
        return 0;

    int lh = max(0, MaxPathDown(root->left, maxi));
    int rh = max(0, MaxPathDown(root->right, maxi));

    maxi = max(maxi, lh + rh + root->data);
    return max(lh, rh) + root->data;
}

int MaxPathSum(TreeNode *root)
{
    int maxi = INT_MIN;
    MaxPathDown(root, maxi);
    return maxi;
}

int main()
{
    TreeNode *root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->right = new TreeNode(15);
    root->right->left = new TreeNode(7);

    cout << "Max Path Sum is : " << MaxPathSum(root);

    return 0;
}