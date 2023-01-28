#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int marks[100];
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << marks[i] << " , ";
    // }
    // cout <<  endl;
    int arr[] = {5, 1, 7, 9, 2, 4, 8};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[e], arr[s]);
        s++;
        e--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}