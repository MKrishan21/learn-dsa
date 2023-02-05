#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // copy remaining element from first array
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    // copy remaining element from second array
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    // copy back all element from temp to main array
    int count = 0;
    for (int k = s; k <= e; k++)
    {
        arr[k] = temp[count++];
    }
    return;
}

void mergeSort(vector<int> &v, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // Recursive case
    int mid = (s + e) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);
    return merge(v, s, e);
}

int main()
{

    vector<int> arr{2, 5, 4, 12, 6, 32, 14, 15, 19, 20};
    int s = 0;
    int e = arr.size() - 1;

    mergeSort(arr, s, e);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}