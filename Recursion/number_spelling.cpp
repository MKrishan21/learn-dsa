/*The purpose of the code is to convert an 
**integer number into its equivalent English 
**spelling. */

#include <iostream>
#include <string>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpelling(int n)
{
    if (n == 0)
        return;

    int last_digit = n % 10;
    printSpelling(n / 10);
    cout << spell[last_digit] << " ";
}

int main()
{
    int n;
    cout << "Enter NUmber" << endl;
    cin >> n;

    printSpelling(n);
    return 0;
}