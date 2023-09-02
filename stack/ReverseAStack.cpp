#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int temp = s.top();
    s.pop();
    InsertAtBottom(s, data);
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int t = s.top();
    s.pop();
    reverseStack(s);
    InsertAtBottom(s, t);
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(25);
    s.push(12);
    s.push(32);
    s.push(55);
    s.push(14);

    // InsertAtBottom(s, 20);
    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}