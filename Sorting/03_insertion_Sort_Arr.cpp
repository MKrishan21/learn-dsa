#include <iostream>
using namespace std;

void insertion_Sort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int current = a[i];
        int prev = i - 1;
        while (prev >= 0 and a[prev] > current)
        {
            a[prev + 1] = a[prev];
            prev = prev - 1;
        }
        a[prev + 1] = current;
    }
}
int main()
{
    int arr[] = {-1, -12, 8, 5, 4, 7, -5, 4};
    int n = sizeof(arr) / sizeof(int);
    insertion_Sort(arr, n);

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}