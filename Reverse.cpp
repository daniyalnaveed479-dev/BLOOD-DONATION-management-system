#include "Reverse.h"
#include <vector>
#include <algorithm>
using namespace std;

void CircularLinkedList::Reverse() {
    if (count < 2)
        return;

    vector<BloodNode*> nodes;
    BloodNode* current = head->next;

    for (int i = 0; i < count; i++) {
        nodes.push_back(current);
        current = current->next;
    }

    reverse(nodes.begin(), nodes.end());

    for (int i = 0; i < count; i++) {
        nodes[i]->next = nodes[(i + 1) % count];
    }

    head = nodes.back();
}