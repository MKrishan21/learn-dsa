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

int hight(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = hight(root->left);
    int rh = hight(root->right);

    return max(lh, rh) + 1;
}

int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int D1 = hight(root->left) + hight(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1, max(D2, D3));
}

int main()
{
    Node *root = buildTree();
    cout << "Diamater is" << diameter(root);
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
