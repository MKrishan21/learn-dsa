#include <iostream>
#include <string>
using namespace std;
int main()
{
    char selection;
    cin >> selection;

    do
    {

        if (selection == 'a')
        {
            string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
            string key{"qazwsxedcrfvtgbyhnujmikolpQAZWSXEDCRFVTGBYHNUJMIKOLP"};

            string message{};
            cout << "Enter MESSAGE : " << endl;
            getline(cin, message);

            string encrypted_message{};

            for (auto c : message)
            {
                size_t position = alphabet.find(c);
                if (position != string::npos)
                {
                    char new_char = {key.at(position)};
                    encrypted_message += new_char;
                }
                else
                {
                    encrypted_message += c;
                }
            }
            cout << encrypted_message;
        }
        else if (selection == 'q')
        {
            cout << " Bye ";
        }

    } while (selection != 'q');

    return 0;
}