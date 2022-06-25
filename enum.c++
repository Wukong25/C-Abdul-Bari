#include <iostream>

using namespace std;

enum day {mon, tue, wed, thu, fri, sat, sun};

int main() {

    day d1 = mon;
    day d2 = tue;
    day d3 = wed;
    day d4 = thu;
    day d5 = fri;
    day d6 = sat;
    day d7 = sun;
    day d = mon;

    if (d1 == d) {

        cout << "how can this be true!";
    }
    else {

        cout << "yeah it is working as expected." << endl;
    }

    return 0;
}