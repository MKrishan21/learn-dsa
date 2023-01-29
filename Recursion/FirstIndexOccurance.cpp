#include <iostream>
using namespace std;

int OccureFirst(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int subIndex = OccureFirst(arr + 1, n - 1, key);
    if (subIndex != -1)
    {
        return subIndex + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 4, 5, 5, 8, 4, 5, 12, 13};
    int n = sizeof(arr) / sizeof(int);
    int key = 13;

    cout << OccureFirst(arr, n, key);
    return 0;
}