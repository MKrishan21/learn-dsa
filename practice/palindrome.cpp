#include <iostream>
using namespace std;

bool ReverseNum(int n)
{
    int rev = 0;
    int temp = n;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (rev == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    if (ReverseNum(n))
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }
}