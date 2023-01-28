#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int doUnion(vector<int> &v, vector<int> &c)
{
    int n = v.size();
    int m = c.size();
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }
    for (int j = 0; j < m; j++)
    {
        s.insert(c[j]);
    }

    int p = s.size();
    for (int p : s)
    {
        cout << p
             << " ";
    }
    return s.size();
}

int main()
{
    vector<int> arr1 = {10, 20, 1, 5, 14, 23, 26, 58, 47};
    vector<int> arr2 = {17, 18, 9, 48, 59, 62};

    doUnion(arr1, arr2);

    return 0;
}