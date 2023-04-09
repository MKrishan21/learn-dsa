#include <iostream>
#include "list.h"
using namespace std;



int middleElement(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main()
{

    List l;
    l.push_back(6);
    l.push_back(49);
    l.push_back(30);
    l.push_back(11);
    // l.push_back(4);
    // l.push_back(5);
    // l.push_back(6);

    Node *head = l.begin();

    cout << endl;
    cout << countElement(head) << endl;
    cout << middleElement(head);

    return 0;
}