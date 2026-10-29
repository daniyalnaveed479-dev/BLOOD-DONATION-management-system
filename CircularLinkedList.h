#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include "BloodNode.h"

class CircularLinkedList {
private:
    BloodNode* head;
    int count;

public:
    CircularLinkedList();
    ~CircularLinkedList();

    bool IsEmpty() const;
    bool IsNotEmpty() const;
    int Size() const;

    void Insert(BloodNode* node);
    void Remove();

    void InsertAt(int index, BloodNode* node);
    void RemoveAt(int index);

    void Swap(int index1, int index2);
    void Sort();
    void Reverse();
    void Print() const;

    void MoveToNextBlood();
    void CheckStatus() const;
};

#endif