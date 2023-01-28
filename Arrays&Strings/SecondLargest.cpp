#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondlargest(vector<int> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << ",";
    }
    return v[n - 2];
}

int main()
{
    vector<int> arr{5, 9, 5, 9, 5, 5, 22, 5, 455, 5};
    int a = secondlargest(arr);
    cout << a;
}