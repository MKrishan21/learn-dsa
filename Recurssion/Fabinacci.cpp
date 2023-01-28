#include <iostream>
using namespace std;

long int fib(long int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }
    long int f1 = fib(n - 1);
    long int f2 = fib(n - 2);
    return f1 + f2;
}

int main()
{
    long int n;
    cout << "Enter number" << endl;
    cin >> n;

    cout << fib(n);

    return 0;
}