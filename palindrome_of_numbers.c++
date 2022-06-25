#include <iostream>

using namespace std;

int main() {

    int n, m, r = 0, rev = 0;

    cout << "Enter any number : ";
    cin >> n;

    m = n;

    while (n > 0) {

        r = n % 10;
        n /= 10;

        rev = rev*10 + r;
    }

    if (rev == m) {

        cout << "Palindrome" << endl;
    }
    else {

        cout << "Not Palindrome" << endl;
    }

    return 0;
}