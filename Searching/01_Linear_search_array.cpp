#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {5, 6, 2, 8, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    cin >> element;
    int index = linear_search(arr, n, element);
    if (index != 0)
    {
        cout << element
             << " is persent in array at index " << index << endl;
    }
    else
    {
        cout << element
             << " is not found" << endl;
    }

    return 0;
}