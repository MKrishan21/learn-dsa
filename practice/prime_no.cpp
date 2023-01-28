#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int n;
    cout << " Enter Number ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Yes " << n << " is prime Number.";
    }
    else
    {
        cout << "No this is not a prime number.";
    }

    return 0;
}