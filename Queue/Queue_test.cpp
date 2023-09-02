#include <iostream>
#include "queue.h";
using namespace std;

int main()
{
    Queue myq(7);

    myq.push(4);
    myq.push(6);
    myq.push(5);

    while (!myq.empty())
    {
        cout << myq.getfront() << endl;
        myq.pop();
    }

    return 0;
}