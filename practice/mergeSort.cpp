#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;

    vector<int> v;

    while (i <= m and j <= r)
    {
        if (arr[i] < arr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= m)
    {
        v.push_back(arr[i++]);
    }
    while (j <= r)
    {
        v.push_back(arr[j++]);
    }
    int count = 0;
    for (int k = l; k <= r; k++)
    {
        arr[k] = v[count++];
    }
    return;
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {2, 12, 32, 15, 14, 11, 25};
    int n = sizeof(arr) / sizeof(int);
    int l = 0;
    int r = n - 1;

    mergesort(arr, l, r);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
