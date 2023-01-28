#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void display_menu();
char get_selection();

void handle_display(const vector<double> &v);
void handle_add(vector<double> &v);
void handle_mean(const vector<double> &v);
void handle_smallest(const vector<double> &v);
void handle_largest(const vector<double> &v);
void handle_find(const vector<double> &v);
void handle_quit();
void handle_unknown();

void display_list(const vector<double> &v);
double calculate_mean(const vector<double> &v);
double get_smallest(const vector<double> &v);
double get_largest(const vector<double> &v);
bool find(const vector<double> &v, double target);
void del(vector<double> &v);

int main()
{

    vector<double> numbers;
    char selection{};

    do
    {
        display_menu();
        selection = get_selection();
        switch (selection)
        {
        case 'P':
            handle_display(numbers);
            break;
        case 'A':
            handle_add(numbers);
            break;
        case 'M':
            handle_mean(numbers);
            break;
        case 'S':
            handle_smallest(numbers);
            break;
        case 'L':
            handle_largest(numbers);
            break;
        case 'F':
            handle_find(numbers);
            break;
        case 'Q':
            handle_quit();
            break;
        case 'U':
            handle_unknown();
            break;
        case 'D':
            del(numbers);
            break;
        }

    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "P - Print Numbers" << endl;
    cout << "A - Add Number" << endl;
    cout << "M - Display Mean of Numbers" << endl;
    cout << "S - Smallest Number in List" << endl;
    cout << "L - Lmallest Number in List" << endl;
    cout << "F - Find Number in List" << endl;
    cout << "D - Delete Number from list" << endl;
    cout << "Q - Quit" << endl;
    cout << "\n\nPLEASE ENTER YOUR SELECTION"
         << endl;
}

char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void handle_display(const vector<double> &v)
{
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        display_list(v);
}

void handle_add(vector<double> &v)
{
    double add_num{};
    cout << "Enter the Number you want to add." << endl;
    cin >> add_num;
    v.push_back(add_num);
    cout << add_num << "Added" << endl;
}

void handle_mean(const vector<double> &v)
{
    if (v.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else
        cout << "The mean is " << calculate_mean(v) << endl;
}

void handle_smallest(const vector<double> &v)
{
    if (v.size() == 0)
        cout << "Unable to determine the smallest - list is empty" << endl;
    else
        cout << "The smallest element in the list is " << get_smallest(v) << endl;
}

void handle_largest(const vector<double> &v)
{
    if (v.size() == 0)
        cout << "Unable to determine the largest - list is empty" << endl;
    else
        cout << "The largest element in the list is " << get_largest(v) << endl;
}

void handle_find(const vector<double> &v)
{
    double target{};
    cout << "Enter Number " << endl;
    cin >> target;
    if (find(v, target))
        cout << target << " is present " << endl;
    else
        cout << target << " not found !" << endl;
}

void handle_quit()
{
    cout << "Very well, Goodbye." << endl;
}

void handle_unknown()
{
    cout << "Unknown Selection - Try Again" << endl;
}

void display_list(const vector<double> &v)
{
    cout << "[ ";
    for (auto num : v)
        cout << num << " ";
    cout << "]" << endl;
}

double calculate_mean(const vector<double> &v)
{
    double total{};
    for (auto num : v)
        total += num;
    return static_cast<double>(total) / v.size();
}

double get_largest(const vector<double> &v)
{
    double largest = v.at(0);
    for (auto num : v)
        if (num > largest)
            largest = num;
    return largest;
}

double get_smallest(const vector<double> &v)
{
    double smallest = v.at(0);
    for (auto num : v)
        if (num < smallest)
            smallest = num;
    return smallest;
}

bool find(const vector<double> &v, double target)
{
    for (auto num : v)
        if (target == num)
            return true;
    return false;
}

void del(vector<double> &v)
{
    double target;
    cout << "Enter number to be deleted" << endl;
    cin >> target;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            swap(v[i], v[n - 1]);
            v.pop_back();
            swap(v[i], v[n - 2]);
            cout << "Deleted number successfully" << endl;
            return;
        }
    }
    cout << "Number is not present in list";
}