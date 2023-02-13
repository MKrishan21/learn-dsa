#include <iostream>
using namespace std;

int MinElement(int arr[], int n)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        else if (arr[mid] > arr[n - 1])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return arr[mid];
}

int main()
{
    int arr[] = {5, 6, 7, 8, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << MinElement(arr, n);
    return 0;
}