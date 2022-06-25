#include <iostream>

using namespace std;

int main() {

    int n, r, rev = 0, aux;

    cout << "Enter a number : ";
    cin >> n;

    while (n > 0) {

        r = n % 10;
        n /= 10;

        rev = rev*10 + r;
    }

    while (rev > 0) {

        aux = rev % 10;
        rev /= 10;

        switch (aux) {

            case 1: cout << "one ";
                break;
            case 2: cout << "two ";
                break;
            case 3: cout << "three ";
                break;
            case 4: cout << "four ";
                break;
            case 5: cout << "five ";
                break;
            case 6: cout << "six ";
                break;
            case 7: cout << "seven ";
                break;
            case 8: cout << "eight ";
                break;
            case 9: cout << "nine ";
                break;
            case 0: cout << "zero ";
                break;
            default : cout << "* ";
                break;
        }
    }

    cout << endl;

    return 0;
}