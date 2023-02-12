#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    int pivot = v[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[e]);
    return i + 1;
}

void Quicksort(vector<int> &v, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // recursive case

    int p = partition(v, s, e);
    Quicksort(v, s, p - 1);
    Quicksort(v, p + 1, e);
}

int main()
{
    vector<int> arr{5, 1, 2, 3, 9, 7, 5, 1, 4, 10};
    int n = arr.size();

    Quicksort(arr, 0, n - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}