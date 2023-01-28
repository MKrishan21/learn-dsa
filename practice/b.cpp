#include <iostream>
using namespace std;

int main()
{
    int *data = new int[6];

    for (int i = 0; i < 6; i++)
        *(data + i) = i * 3;

    for (int i = 0; i <= 6; i++)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}