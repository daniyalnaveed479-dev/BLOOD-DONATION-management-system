#include "CheckStatus.h"
#include <iostream>
using namespace std;

void CircularLinkedList::CheckStatus() const {
    if (IsEmpty())
        cout << "Collection status: EMPTY\n";
    else
        cout << "Collection status: NOT EMPTY\n";

    cout << "Total donor records: "
         << count << '\n';
}