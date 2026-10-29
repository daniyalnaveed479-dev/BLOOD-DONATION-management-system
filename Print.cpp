#include "Print.h"
#include <iostream>
using namespace std;

void CircularLinkedList::Print() const {
    if (IsEmpty()) {
        cout << "No donor records available.\n";
        return;
    }

    BloodNode* current = head->next;

    cout << "\n--- Blood Donor Records ---\n";

    do {
        cout << "Donor ID: " << current->donorID
             << " | Name: " << current->donorName
             << " | Blood Group: " << current->bloodGroup
             << " | Units: " << current->units
             << '\n';

        current = current->next;

    } while (current != head->next);

    cout << "Last node links back to first node.\n";
}