#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> &arr, int key)
{
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    vector<int> vec{5, 6, 2, 8, 9, 7};
    int key;
    cin >> key;
    int index = LinearSearch(vec, key);
    if (index != 0)
    {
        cout << key
             << " is persent in array at index " << index << endl;
    }
    else
    {
        cout << key
             << " is not found" << endl;
    }

    return 0;
}