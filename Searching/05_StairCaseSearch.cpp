// Straircase search is used in 2D array
// it is basically a divide and conquer Algorithm

#include <iostream>
using namespace std;

pair<int, int> StaircaseSearch(int arr[][5], int n, int m, int key)
{
    // if invallid input then
    if (key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0;
    int j = m - 1;

    while (i <= n - 1 and j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] > key)
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
    int arr[][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 45, 15},
                    {16, 17, 18, 19, 20}};

    int n = 4;
    int m = 4;

    pair<int, int> coords = StaircaseSearch(arr, n, m, 4);
    cout << coords.first << " " << coords.second << endl;

    return 0;
}