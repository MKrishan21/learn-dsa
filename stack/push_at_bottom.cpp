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
int main()
{

    stack<int> s;
    s.push(5);
    s.push(9);
    s.push(8);
    s.push(4);
    s.push(14);
    s.push(25);
    s.push(55);

    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    InsertAtBottom(s, 123);
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}