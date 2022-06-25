#include <iostream>

using namespace std;

int main() {

    string name;

    cout << "May I know your name.\n";
    getline(cin, name);
    cout << "Welcome Legendary " << name << "\n";

    return 0;
}