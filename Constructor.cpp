#include "CircularLinkedList.h"

CircularLinkedList::CircularLinkedList() {
    head = nullptr;
    count = 0;
}

CircularLinkedList::~CircularLinkedList() {
    while (IsNotEmpty()) {
        Remove();
    }
}