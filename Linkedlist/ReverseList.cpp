#include <iostream>
#include "list.h"
using namespace std;

void reverse(NOde *head)
{
    Node *current = head;
    Node *prev = NULL;
    Node *n;
    while (current != NULL)
    {
        n = current->next;    // save next node
        current->next = prev; // make current pointer point next node
        // update current and previous
        prev = current;
        current = next;
    }
}

int main()
{
    Node *head;
    cin >> head;
    cout << head;
    reverse(head);
    cout << head;
    return 0;
}