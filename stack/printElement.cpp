#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &s)
{
    stack<int> temp; // create an auxiliary stack

    while (!s.empty())
    {                    // loop through the elements of the original stack
        int t = s.top(); // pop the top element from the original stack and store it in a temporary variable
        s.pop();

        while (!temp.empty() && temp.top() > t)
        {                       // loop through the elements of the auxiliary stack until we find an element smaller than or equal to temp
            s.push(temp.top()); // pop the top element from the auxiliary stack and push it back to the original stack
            temp.pop();
        }

        temp.push(t); // push t to the top of the auxiliary stack
    }

    // move the elements from the auxiliary stack back to the original stack
    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    cout << st.size() << endl;
    sortStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
