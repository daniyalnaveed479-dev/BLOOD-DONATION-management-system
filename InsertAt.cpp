#include "InsertAt.h"
#include <iostream>
using namespace std;

void CircularLinkedList::InsertAt(
    int index, BloodNode* node) {

    if (node == nullptr)
        return;

    if (index < 0 || index > count) {
        cout << "Invalid index.\n";
        delete node;
        return;
    }

    if (index == 0) {
        Insert(node);
        return;
    }

    if (index == count) {
        node->next = head->next;
        head->next = node;
        head = node;
        count++;
        return;
    }

    BloodNode* current = head->next;

    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }

    node->next = current->next;
    current->next = node;

    count++;
}