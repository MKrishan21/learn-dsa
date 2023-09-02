#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPostorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = buildTree();
    printPostorder(root);
    return 0;
}

// input (1 2 4 -1 -1 5 7 -1 -1 -1 6 -1 -1)
// output (4 7 5 2 6 1)