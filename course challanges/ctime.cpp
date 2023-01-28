// Program to find Date Day & Time.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t curr_time = time(nullptr);
    /*time_t Returns time*/

    char *tm = ctime(&curr_time); /*tm contains calander date and time at address of current_time*/
    cout << "today is " << tm;    /*Returns local time based on the argument timer*/
    return 0;
}
