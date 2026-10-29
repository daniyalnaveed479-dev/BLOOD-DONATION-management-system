#include "Insert.h"

void CircularLinkedList::Insert(BloodNode* node) {
    if (node == nullptr)
        return;

    if (head == nullptr) {
        head = node;
        node->next = node;
    }
    else {
        node->next = head->next;
        head->next = node;
    }

    count++;
}