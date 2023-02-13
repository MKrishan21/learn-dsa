#include <iostream>
#include <vector>
using namespace std;

int RotatedArraySearch(vector<int> &v, int k)
{
    int n = v.size();
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == k)
        {
            return mid;
        }
        if (v[s] <= v[mid])
        {
            if (k >= v[s] and k <= v[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (k >= v[mid] and k <= v[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{5, 6, 7, 1, 2, 3, 4};
    int key;
    cout << "Enter key - ";
    cin >> key;

    cout << RotatedArraySearch(arr, key);
    return 0;
}