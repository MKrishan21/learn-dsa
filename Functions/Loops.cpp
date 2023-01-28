#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> Numbers;
    char selection;

    do
    {
        cout << "\nP - Print Numbers \n"
             << "A - Add a Numbers \n"
             << "M - Mean of all Numbers \n"
             << "S - Display smallest number \n"
             << "L - Display largest number \n"
             << "Q - Quit \n\n"
             << "/nEnter your selection: ";
        cin >> selection;
        if (selection == 'p' || selection == 'P')
        {
            if (Numbers.size() == 0)
            {
                cout << "[] sorry the list is empty !" << endl;
            }
            else
            {
                for (auto num : Numbers)
                {
                    cout << num << " ";
                }
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int addNum;
            cout << "Enter Number you want to add: ";
            cin >> addNum;
            Numbers.push_back(addNum);
            cout << addNum << " is added.\n";
        }
        else if (selection == 'M' || selection == 'm')
        {
            double total = 0;
            for (auto num : Numbers)
            {
                total += num;
            }
            cout << "Mean of all numbers = " << total / Numbers.size() << endl;
        }

        else if (selection == 'l' || selection == 'L')
        {
            if (Numbers.size() == 0)
            {
                cout << "The list is Empty. Add some numbers First" << endl;
            }
            else
            {
                int largNo = Numbers.at(0);
                for (auto num : Numbers)
                {
                    if (num > largNo)
                    {
                        largNo = num;
                    }
                }
                cout << largNo;
            }
        }

        else if (selection == 's' || selection == 'S')
        {
            if (Numbers.size() == 0)
            {
                cout << "The list is Empty. Add some numbers First" << endl;
            }
            else
            {
                int smallNo = Numbers.at(0);
                for (auto num : Numbers)
                {
                    if (num < smallNo)
                    {
                        smallNo = num;
                    }
                }
                cout << smallNo;
            }
        }

        else if (selection == 'q' || selection == 'Q')
        {
            cout << "Thanks!!";
        }
    } while (selection != 'q' && selection != 'Q');
}
