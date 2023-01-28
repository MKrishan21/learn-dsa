#include <iostream>
#include <string>
using namespace std;

string composeLength(string str)
{
    int n = str.length();
    string output;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if (output.length() > str.length())
    {
        return str;
    }
    return output;
}

int main()
{
    string str1 = "aaabbbccddddee";
    cout << composeLength(str1) << endl;
    string str2 = "KkKkrrrr";
    cout << composeLength(str2) << endl;
    return 0;
}