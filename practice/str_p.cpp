#include <iostream>
#include <string>
#include <vector>
using namespace std;

void greeting(string name, string prefix = "Mr.", string sufix = " ")
{
    cout << "Hello " << prefix + " " + name + " " + sufix;
}
