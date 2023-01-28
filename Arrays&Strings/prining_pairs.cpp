#include <iostream>
using namespace std;

int printing_pairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];

            for (int k = j + 1; k < n; k++)
            {
                int z = arr[k];

                cout << x << "," << y << "," << z << endl;
            }
        }

        cout << endl;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    printing_pairs(arr, n);
    return 0;
}