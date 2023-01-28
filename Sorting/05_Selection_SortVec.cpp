#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i <= n; i++)
    {
        int min = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (v[min] > v[j])
                min = j;
        }
        swap(v[min], v[i]);
    }
}
int main()
{
    vector<int> arr{0, 5, 6, 46, 6, 456, 46, 45, 6, 466, 8, -5, -9};
    SelectionSort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}