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

int calcDia(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDia = calcDia(root->left, &lh);
    int rDia = calcDia(root->right, &rh);

    int currDia = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDia, max(lDia, rDia));
}

int main()
{
    Node *root = buildTree();
    int height = 0;
    cout << calcDia(root, &height);
    return 0;
}

// input (1 2 4 -1 -1 5 7 -1 -1 -1 6 -1 -1)
/*
output
5
*/
