#include <iostream>
using namespace std;

/**
 * @brief Recursively prints the numbers from n down to 1
 *
 * @param num The number to start the count down at
 */
void countdown(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " , ";
    countdown(n - 1);
}

/**
 * @brief Recursively prints the numbers from 1 up to n
 *
 * @param num The number to end the count up at
 */
void countup(int n)
{
    if (n == 0)
        return;

    countup(n - 1);
    cout << n << " , ";
}

int main()
{
    int n;
    cin >> n;
    countdown(n);
    cout << endl;
    countup(n);
    return 0;
}