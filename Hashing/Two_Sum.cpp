#include <iostream>
#include <unordered_set>

using namespace std;

void findPair(int arr[], int size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        int temp = sum - arr[i];
        if (s.find(temp) != s.end())
        {
            cout << "present";
            return;
        }
        s.insert(arr[i]);
    }
    cout << "not present";
}

int main()
{
    int arr[] = {2, 6, 7, 9, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cin >> sum;
    findPair(arr, size, sum);
    return 0;
}