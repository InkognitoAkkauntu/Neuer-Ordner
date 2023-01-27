#include <iostream>

using namespace std;
string convert(string con) {

}

string modeID(string mode) {
    if(mode == "n") {
        return "-n";
    }
    else {
        return "-!";
    }
}

string cts(string save, string mode) {
    int num = save.length();
    string Char;
    string finalSave;

    finalSave.append(modeID(mode));
    if(finalSave.find("-!")) {
        abort();
    }

    for(int i = 0; i == num; i++) {
        Char = save[i];
        // - = escape character for savefile
        // -n = keyword for name
        // -! = unknown character -> abort program

    }

    return finalSave;
}