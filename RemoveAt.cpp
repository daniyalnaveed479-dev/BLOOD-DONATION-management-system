#include "RemoveAt.h"
#include <iostream>
using namespace std;

void CircularLinkedList::RemoveAt(int index) {
    if (IsEmpty() || index < 0 || index >= count) {
        cout << "Invalid index or empty list.\n";
        return;
    }

    if (index == 0) {
        Remove();
        return;
    }

    BloodNode* current = head->next;

    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }

    BloodNode* target = current->next;
    current->next = target->next;

    if (target == head) {
        head = current;
    }

    delete target;
    count--;

    cout << "Donor removed at index "
         << index << ".\n";
}