#include <iostream>
#include "list.h"
using namespace std;

int countElement(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{

    List l;
    l.push_back(6);
    l.push_back(49);
    l.push_back(30);
    l.push_back(11);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);

    Node *head = l.begin();
    cout << countElement(head) << endl;

    return 0;
}