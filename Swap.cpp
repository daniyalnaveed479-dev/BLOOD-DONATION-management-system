#include "Swap.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void CircularLinkedList::Swap(int index1, int index2) {
    if (index1 < 0 || index2 < 0 ||
        index1 >= count || index2 >= count) {
        cout << "Invalid index.\n";
        return;
    }

    if (index1 == index2)
        return;

    vector<BloodNode*> nodes;
    BloodNode* current = head->next;

    for (int i = 0; i < count; i++) {
        nodes.push_back(current);
        current = current->next;
    }

    swap(nodes[index1]->donorID,
         nodes[index2]->donorID);

    swap(nodes[index1]->donorName,
         nodes[index2]->donorName);

    swap(nodes[index1]->bloodGroup,
         nodes[index2]->bloodGroup);

    swap(nodes[index1]->units,
         nodes[index2]->units);

    cout << "Donor records swapped.\n";
}