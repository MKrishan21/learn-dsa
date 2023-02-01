/*This is a C++ program that performs two operations:

Reverses a given number
Raises the given number to the power of the reversed number */

#include <iostream>
#include <cmath>
using namespace std;

/*This is a function that reverse a number*/

long long reverse(long long n)
{
    long long rev = 0;
    while (n > 0)
    {

        long long rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

/*This function calculate the power of the number
  N - represent the number
  R - represent the power
  */

int main()
{

    long long N;
    cin >> N;
    int mod = 1000000007;

    long long R = reverse(N);
    cout << R << endl;
    cout << pow(N, R / 2);

    return 0;
}