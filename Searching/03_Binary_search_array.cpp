#include <iostream>
using namespace std;

int binary_search(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
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
    int array[] = {10, 20, 30, 40, 50, 60, 70, 75};
    int n = sizeof(array) / sizeof(int);
    int key;
    cout << "Enter the Number you want to find. " << endl;
    cin >> key;
    int index = binary_search(array, n, key);
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