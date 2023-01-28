#include <iostream>
#include <vector>
using namespace std;

pair<int, int> Search(vector<vector<int>> &v, int key)
{
    int n = v.size();
    int m = v[0].size();
    if (key < v[0][0] or key > v[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0;
    int j = m - 1;
    while (i < n - 1 and j >= 0)
    {
        if (v[i][j] == key)
        {
            return {i, j};
        }
        else if (v[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr{{1, 3, 5, 7},
                            {10, 11, 16, 20},
                            {23, 30, 34, 60},
                            {50, 60, 80, 90}};
    int key;
    cout << "Enter the element" << endl;
    cin >> key;

    pair<int, int> ans = Search(arr, key);
    cout << ans.first << " " << ans.second;
    return 0;
}