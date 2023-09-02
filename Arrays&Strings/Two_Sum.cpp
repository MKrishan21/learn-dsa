#include <iostream>
using namespace std;

bool checkPair(int arr[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 6, 3, 8};
    int x;
    cin >> x;
    int size = sizeof(arr) / sizeof(arr[0]);
    if (checkPair(arr, size, x))
    {
        cout << "true " << x << " is present";
    }
    else
    {
        cout << "false " << x << " not present";
    }
    return 0;
}