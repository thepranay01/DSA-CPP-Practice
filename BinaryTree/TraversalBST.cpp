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

// code for insertion based on value of root 
Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        //  val > root-> data
        root->right = insertBST(root->right, val);
    }

    return root;
}

// inOrder Function
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{

    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
}

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    // print inOrder
    cout << "InOrder : ";
    inOrder(root);
    cout << endl;

    cout << "PreOrder : ";
    preOrder(root);
    cout << endl;

    cout << "PostOrder : ";
    postOrder(root);
    cout << endl;

    return 0;
}