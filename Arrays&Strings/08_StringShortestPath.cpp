#include <iostream>
using namespace std;

int main()
{
    char Route[100];
    cin.getline(Route, 100);

    int x = 0;
    int y = 0;
    for (int i = 0; Route[i] != '\0'; i++)
    {
        switch (Route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        default:
            break;
        }
    }
    cout << "final X and Y are : " << x << " , " << y << "-";

    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }
}