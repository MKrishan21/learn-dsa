#include <iostream>
using namespace std;

void Printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArr(int *arr, int i, int n, int val)
{
    // base case
    if (i == n)
    {
        Printarr(arr, n);
        return;
    }
    // recursive case
    arr[i] = val;
    fillArr(arr, i + 1, n, val + 1);

    // Backtracking case
    arr[i] = -1 * arr[i];
}

int main()
{
    int arr[100] = {0};
    int n;
    cin >> n;
    fillArr(arr, 0, n, 1);
    Printarr(arr, n);
    return 0;
}