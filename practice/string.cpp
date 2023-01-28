#include <iostream>
#include <string>
#include <vector>
using namespace std;

void greeting(string name, string prefix = "Mr.", string sufix = " ")
{
    cout << "Hello " << prefix + " " + name + " " + sufix << endl;
}

void print(vector<string> v)
{
    for (auto s : v)
    {
        cout << s + " ";
    }
}

void clear_v(vector<string> &v)
{
    v.clear();
}

int main()
{
    greeting("Kittu", "Dr.", "Misra");
    vector<string> v{"kittu", "pankaj", "kuku"};
    cout << "Value for v before - ";
    print(v);
    cout << endl;
    clear_v(v);
    cout << "V after - ";
    print(v);
    return 0;
}