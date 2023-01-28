#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << "Yes " << n << " is power of 2.";
    }
    else
    {
        cout << n << " is not the power of 2.";
    }
    return 0;
}