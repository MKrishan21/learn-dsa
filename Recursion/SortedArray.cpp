#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int v[], int i, int n)
{
    if (i == n - 1)
    {
        return true;
    }
    if (v[i] < v[i + 1] and isSorted(v, i + 1, n))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 5, 9, 10, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << isSorted(arr, 0, n);

    return 0;
}