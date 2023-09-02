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

int sumSAtK(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // check if node is not NULL
        if (temp != NULL)
        {
            if (level == k)
            {
                sum += temp->data;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main()
{
    Node *root = buildTree();
    cout <<  sumSAtK(root, 1);
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
