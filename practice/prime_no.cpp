/*This is a C++ program that checks if a given number is a prime number or not.

The program first takes an integer input from the user and stores it in the variable "n".*/

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

/*it calls the function "isPrime" which takes an
integer as an argument and returns a boolean value
indicating whether the number is prime or not.*/

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