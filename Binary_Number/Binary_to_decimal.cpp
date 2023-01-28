#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rem, decNO = 0, i = 0;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        decNO = decNO + (rem * pow(2, i));
        i++;
        n = n / 10;
    }
    cout << decNO;
    return 0;
}