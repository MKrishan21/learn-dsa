#include <iostream>
using namespace std;

int main()
{
    int n;
    int reverse_num = 0;
    cout << " Enter the number ";
    cin >> n;
    while (n > 0)
    {
        int reminder = n % 10;
        reverse_num = reverse_num * 10 + reminder;
        n = n / 10;
    }
    cout << reverse_num;
    return 0;
}