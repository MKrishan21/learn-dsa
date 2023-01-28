#include <iostream>
using namespace std;

int Max_SubArr_sum(int arr[], int n)
{
    int CS = 0;
    int Largest = 0;
    for (int i = 0; i < n; i++)
    {
        CS += arr[i];
        if (CS < 0)
        {
            CS = 0;
        }
        Largest = max(Largest, CS);
    }
    return Largest;
}

int main()
{
    int arr2[] = {-1, -2, -3, -4};
    int n = sizeof(arr2) / sizeof(int);

    int Sub_ArrSum1 = Max_SubArr_sum(arr2, n);
    cout << Sub_ArrSum1;

    return 0;
}