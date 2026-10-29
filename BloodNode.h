#ifndef BLOODNODE_H
#define BLOODNODE_H

#include <string>
using namespace std;

struct BloodNode {
    int donorID;
    string donorName;
    string bloodGroup;
    int units;
    BloodNode* next;

    BloodNode(int id, string name, string group, int u) {
        donorID = id;
        donorName = name;
        bloodGroup = group;
        units = u;
        next = nullptr;
    }
};

#endif