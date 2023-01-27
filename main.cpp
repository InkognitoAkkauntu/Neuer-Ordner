#include <iostream>
#include "setup.h"

using namespace std;

int main() {
    system("clear");
    cout << "something something\n";
    cout << "1. Load Save\n";
    cout << "2. New Save\n";
    int choice;
    cin >> choice;
    string saveString;
    switch(choice) {
        case 1:
            load();
            break;
        case 2:
            saveString = newSave();
            break;
        default:
            system("clear");
            cout << "You entered something wrong.\n";
            cout << "Restart the application and try again\n";
            break;
    }       
}