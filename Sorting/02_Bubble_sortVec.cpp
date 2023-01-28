#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> arr{4, 5, -4, -2, 14, 9, 0, 1, -6};
    bubbleSort(arr);
    for (auto i : arr)
        cout << i << " ,";

    return 0;
}