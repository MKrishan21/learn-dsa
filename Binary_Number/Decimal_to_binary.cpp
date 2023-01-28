#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, rem;
    cin >> n;
    while (n > 0)
    {
        rem = n % 2;
        cout << rem;
        n = n / 2;
    }
    return 0;
}