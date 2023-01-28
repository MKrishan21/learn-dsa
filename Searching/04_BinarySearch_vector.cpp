#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int key)
{
    int n = arr.size();

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec{10, 20, 30, 40, 50, 60, 70, 75};
    int key;
    cout << "Enter the Number you want to find. " << endl;
    cin >> key;
    int index = BinarySearch(vec, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index;
    }
    else
    {
        cout << key << " is not present in the List.";
    }
    return 0;
}