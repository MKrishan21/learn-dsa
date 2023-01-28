#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i <= n; i++)
    {
        int current = v[i];
        int prev = i - 1;
        while (prev >= 0 && v[prev] > current)
        {
            v[prev + 1] = v[prev];
            prev = prev - 1;
        }
        v[prev + 1] = current;
    }
}
int main()
{
    vector<int> arr = {10, -5, 4, -2, -1, 6, 8, 11, 0, -9};
    InsertionSort(arr);
    for (auto i : arr)
        cout << i << " ,";
    return 0;
}