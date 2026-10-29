#include "MoveToNextBlood.h"
#include <iostream>
using namespace std;

void CircularLinkedList::MoveToNextBlood() {
    if (IsEmpty()) {
        cout << "Collection is empty.\n";
        return;
    }

    head = head->next;

    cout << "Moved to the next donor.\n";
}