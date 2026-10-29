#include "Sort.h"
#include <vector>
#include <algorithm>
using namespace std;

void CircularLinkedList::Sort() {
    if (count < 2)
        return;

    vector<BloodNode*> nodes;
    BloodNode* current = head->next;

    for (int i = 0; i < count; i++) {
        nodes.push_back(current);
        current = current->next;
    }

    sort(nodes.begin(), nodes.end(),
         [](BloodNode* a, BloodNode* b) {
             return a->donorID < b->donorID;
         });

    for (int i = 0; i < count; i++) {
        nodes[i]->next = nodes[(i + 1) % count];
    }

    head = nodes.back();
}