#include <iostream>

using namespace std;

int main() {

    int day =  0;

    cout << "Enter any number : ";
    cin >> day;

    switch (day) {

        case 1:
            cout << "mon\n";
            break;

        case 2: 
            cout << "tue\n";
            break;

        case 3: 
            cout << "wed\n";
            break;

        case 4:
            cout << "thur\n";
            break;

        case 5:
            cout << "fri\n";
            break;

        case 6:
            cout << "sat\n";
            break;

        case 7:
            cout << "sun\n";
            break;

        default :
            cout << "Invalid Day!\n";
            break;
    }

    return 0;
}