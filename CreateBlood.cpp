#include "CreateBlood.h"

BloodNode* CreateBlood(int id, string name,
                       string group, int units) {
    return new BloodNode(id, name, group, units);
}