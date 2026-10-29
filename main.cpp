#include <iostream>
#include <limits>
#include <string>

#include "CircularLinkedList.h"
#include "CreateBlood.h"

using namespace std;

int main() {
    CircularLinkedList list;
    int choice;

    do {
        cout << "\n===== BLOOD DONOR MANAGEMENT SYSTEM =====\n";
        cout << "1. Display All Donors\n";
        cout << "2. Insert Donor at Head\n";
        cout << "3. Remove Donor from Head\n";
        cout << "4. Insert Donor at Index\n";
        cout << "5. Remove Donor at Index\n";
        cout << "6. Swap Donors\n";
        cout << "7. Sort Donors by ID\n";
        cout << "8. Reverse Collection\n";
        cout << "9. Move to Next Donor\n";
        cout << "10. Check Collection Status\n";
        cout << "11. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(
                numeric_limits<streamsize>::max(), '\n'
            );
            cout << "Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            list.Print();
            break;

        case 2:
        case 4: {
            int id, units, index = 0;
            string name, group;

            if (choice == 4) {
                cout << "Enter index (0-based): ";
                cin >> index;
            }

            cout << "Enter Donor ID: ";
            cin >> id;

            cin.ignore(
                numeric_limits<streamsize>::max(), '\n'
            );

            cout << "Enter Donor Name: ";
            getline(cin, name);

            cout << "Enter Blood Group: ";
            getline(cin, group);

            cout << "Enter Units Donated: ";
            cin >> units;

            if (units < 0) {
                cout << "Units cannot be negative.\n";
                break;
            }

            BloodNode* donor =
                CreateBlood(id, name, group, units);

            if (choice == 2)
                list.Insert(donor);
            else
                list.InsertAt(index, donor);

            break;
        }

        case 3:
            list.Remove();
            break;

        case 5: {
            int index;
            cout << "Enter index (0-based): ";
            cin >> index;
            list.RemoveAt(index);
            break;
        }

        case 6: {
            int first, second;

            cout << "Enter first index: ";
            cin >> first;

            cout << "Enter second index: ";
            cin >> second;

            list.Swap(first, second);
            break;
        }

        case 7:
            list.Sort();
            cout << "Donors sorted by ID.\n";
            break;

        case 8:
            list.Reverse();
            cout << "Collection reversed.\n";
            break;

        case 9:
            list.MoveToNextBlood();
            break;

        case 10:
            list.CheckStatus();
            break;

        case 11:
            cout << "Program closed.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 11);

    return 0;
}