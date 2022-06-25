#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str0[20];

    cout << "Enter any string : ";
    cin.getline(str0, 20);

    char str1[20];

    cout << "Enter another small substring : ";
    cin.getline(str1, 20);

    if (strstr(str0, str1) != nullptr) {

        cout << strstr(str0, str1) << endl;
    }
    else {

        cout << "Didn't found!" << endl;
    }

    char c;

    cout << "Enter any character : ";
    cin >> c;

    if (strchr(str0, c) != nullptr) {

        cout << strchr(str0, c) << endl;
    }
    else {

        cout << "Didn't found!" << endl;
    }

    if (strrchr(str0, c) != nullptr) {

        cout << strrchr(str0, c) << endl;
    }
    else {

        cout << "Didn' found in the reverse too!" << endl;
    }


    cin.ignore();

    char str2[20];

    cout << "Enter a string again : ";
    cin.getline(str2, 20);

    if (strcmp(str0, str2) == 0) {

        cout << "Yes, both the given strings are equal." << endl;
    }
    else {

        cout << "No, both the given strings are different." << endl;
    }

    return 0;

}