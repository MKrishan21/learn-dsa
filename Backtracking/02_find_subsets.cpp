#include <iostream>
#include <vector>
using namespace std;

void findsubset(char *input, char *output, int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] == '\0';
        if (output[0] == '\0')
        {
            cout << "NULL";
        }
        cout << output << endl;
        return;
    }
    // recursive case
    // include the ith letter
    output[j] = input[i];
    findsubset(input, output, i + 1, j + 1);
    // exclude ith letter
    findsubset(input, output, i + 1, j);
}

int main()
{
    char input[100];
    char output[100];
    cin >> input;
    findsubset(input, output, 0, 0);
}