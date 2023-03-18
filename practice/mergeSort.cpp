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
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int count = 0;
    for (int k = s; k <= e; k++)
    {
        arr[k] = temp[count++];
    }
    return;
}

void mergesort(vector<int> &v, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(v, s, mid);
    mergesort(v, mid + 1, e);

    return merge(v, s, e);
}

int main()
{
    vector<int> v{4, 5, 2, 4, 8, 9, 9, 7, 12, 14};
    int s = 0;
    int e = v.size() - 1;

    mergesort(v, s, e);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}