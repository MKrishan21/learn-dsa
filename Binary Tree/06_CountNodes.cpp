#include <iostream>
#include <queue>
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

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
}

int main()
{
    Node *root = buildTree();
    cout << countNodes(root);
    return 0;
}

// input (1 2 4 -1 -1 5 7 -1 -1 -1 6 -1 -1)
/*
output
1
2 6
4 5
7
*/
