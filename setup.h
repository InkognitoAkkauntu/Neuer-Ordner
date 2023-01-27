#include <iostream>
#include <string>
#include "cts.h"

using namespace std;

void load() {

}

string newSave() {
    system("clear");
    cout << "Enter your name: \n";
    string name;
    string save;
    save.append(cts(name, "n"));
    cin >> name;
    system("clear");
    
}