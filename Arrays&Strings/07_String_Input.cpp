#include <iostream>
#include <string>
using namespace std;

int main()
{
    char sentance[100];
    char temp = cin.get();
    int len = 1;
    while (temp != '1')
    {
        sentance[len++] = temp;
        temp = cin.get();
    }
    sentance[len] = '\0';
    cout << sentance << endl;
    cout << len;

    return 0;
}