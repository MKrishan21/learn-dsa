#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_back(6);
    l.push_back(49);
    l.push_back(30);
    l.push_back(11);
    l.push_back(4);
    l.push_back(5);
    l.push_back(14);

    Node *temp = l.begin();

    while (temp != NULL)
    {
        cout << temp->getData() << "->";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}