#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-1, -12, 8, 5, 4, 7, -5, 4};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}