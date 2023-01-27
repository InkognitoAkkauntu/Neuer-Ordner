#include <iostream>
#include "setup.h"

using namespace std;

int main() {
    system("clear");
    cout << "something something\n";
    cout << "1. New Save\n";
    cout << "2. Load Save\n";
    int choice;
    cin >> choice;
    switch(choice) {
        case 1:
            setup();
            break;
        case 2:
            newSave();
            break;
        default:
            system("clear");
            cout << "You entered something wrong.\n";
            cout << "Restart the application and try again\n";
            break;
    }       
}