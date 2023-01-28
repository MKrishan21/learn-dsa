#include <iostream>
using namespace std;

void Dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ,";
    Dec(n - 1);
}

void Inc(int n)
{
    if (n == 0)
        return;

    Inc(n - 1);
    cout << n << ", ";
}

int main()
{
    int n;
    cin >> n;
    Dec(n);
    cout << endl;
    Inc(n);
    return 0;
}