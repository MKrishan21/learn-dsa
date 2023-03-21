// program to find min positive missing element
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).


#include <iostream>
#include <algorithm>
using namespace std;

int missingNumber(int a[], int n)
{
    int ans = 1;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ans)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << missingNumber(arr, n);
    return 0;
}