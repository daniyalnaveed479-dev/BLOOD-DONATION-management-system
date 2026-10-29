#include "Remove.h"
#include <iostream>
using namespace std;

void CircularLinkedList::Remove() {
    if (IsEmpty()) {
        cout << "Collection is empty.\n";
        return;
    }

    BloodNode* first = head->next;

    if (first == head) {
        head = nullptr;
    }
    else {
        head->next = first->next;
    }

    delete first;
    count--;

    cout << "First donor removed.\n";
}